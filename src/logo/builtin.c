#include "logo.h"

#define FF_LOGO_INIT static FFlogo logo; static bool init = false; if(init) return &logo; init = true;
#define FF_LOGO_NAMES(...) static const char* names[] = (const char*[]) { __VA_ARGS__, NULL }; logo.names = names;
#define FF_LOGO_LINES(x) logo.data = x;
#define FF_LOGO_COLORS(...) static const char* colors[] = (const char*[]) { __VA_ARGS__, NULL }; logo.builtinColors = colors;
#define FF_LOGO_RETURN return &logo;

const FFlogo* ffLogoBuiltinGetUnknown()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("unknown", "question mark", "?")
    FF_LOGO_LINES(
        "       ________\n"
        "   _jgN########Ngg_\n"
        " _N##N@@\"\"  \"\"9NN##Np_\n"
        "d###P            N####p\n"
        "\"^^\"              T####\n"
        "                  d###P\n"
        "               _g###@F\n"
        "            _gN##@P\n"
        "          gN###F\"\n"
        "         d###F\n"
        "        0###F\n"
        "        0###F\n"
        "        0###F\n"
        "        \"NN@'\n"
        "\n"
        "         ___\n"
        "        q###r\n"
        "         \"\""
    )
    FF_LOGO_COLORS("")
    FF_LOGO_RETURN
}

static const FFlogo* getLogoNone()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("none", "empty", "")
    FF_LOGO_LINES("")
    FF_LOGO_COLORS("")
    FF_LOGO_RETURN
}

static const FFlogo* getLogoAlpine()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("alpine", "alpinelinux", "alpine-linux")
    FF_LOGO_LINES(
        "       .hddddddddddddddddddddddh.\n"
        "      :dddddddddddddddddddddddddd:\n"
        "     /dddddddddddddddddddddddddddd/\n"
        "    +dddddddddddddddddddddddddddddd+\n"
        "  `sdddddddddddddddddddddddddddddddds`\n"
        " `ydddddddddddd++hdddddddddddddddddddy`\n"
        ".hddddddddddd+`  `+ddddh:-sdddddddddddh.   \n"
        "hdddddddddd+`      `+y:    .sddddddddddh\n"
        "ddddddddh+`   `//`   `.`     -sddddddddd\n"
        "ddddddh+`   `/hddh/`   `:s-    -sddddddd\n"
        "ddddh+`   `/+/dddddh/`   `+s-    -sddddd\n"
        "ddd+`   `/o` :dddddddh/`   `oy-    .yddd\n"
        "hdddyo+ohddyosdddddddddho+oydddy++ohdddh\n"
        ".hddddddddddddddddddddddddddddddddddddh.\n"
        " `yddddddddddddddddddddddddddddddddddy`\n"
        "  `sdddddddddddddddddddddddddddddddds`\n"
        "    +dddddddddddddddddddddddddddddd+\n"
        "     /dddddddddddddddddddddddddddd/\n"
        "      :dddddddddddddddddddddddddd:\n"
        "       .hddddddddddddddddddddddh.";
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoAlpineSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("alpine_small", "alpine-linux-small")
    FF_LOGO_LINES(
        "   /\\ /\\\n"
        "  // \\  \\\n"
        " //   \\  \\\n"
        "///    \\  \\\n"
        "//      \\  \\\n"
        "         \\"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoAndroid()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("android")
    FF_LOGO_LINES(
        "         -o          o-\n"
        "          +hydNNNNdyh+\n"
        "        +mMMMMMMMMMMMMm+\n"
        "      `dMM$2m:$1NMMMMMMN$2:m$1MMd`\n"
        "      hMMMMMMMMMMMMMMMMMMh\n"
        "  ..  yyyyyyyyyyyyyyyyyyyy  ..\n"
        ".mMMm`MMMMMMMMMMMMMMMMMMMM`mMMm.\n"
        ":MMMM-MMMMMMMMMMMMMMMMMMMM-MMMM:\n"
        ":MMMM-MMMMMMMMMMMMMMMMMMMM-MMMM:\n"
        ":MMMM-MMMMMMMMMMMMMMMMMMMM-MMMM:\n"
        ":MMMM-MMMMMMMMMMMMMMMMMMMM-MMMM:\n"
        "-MMMM-MMMMMMMMMMMMMMMMMMMM-MMMM-\n"
        " +yy+ MMMMMMMMMMMMMMMMMMMM +yy+\n"
        "      mMMMMMMMMMMMMMMMMMMm\n"
        "      `/++MMMMh++hMMMM++/`\n"
        "          MMMMo  oMMMM\n"
        "          MMMMo  oMMMM\n"
        "          oNMm-  -mMNs"
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoAndroidSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("android-small", "android_small")
    FF_LOGO_LINES(
        "  ;,           ,;\n"
        "   ';,.-----.,;'\n"
        "  ,'           ',\n"
        " /    O     O    \\\n"
        "|                 |\n"
        "'-----------------'"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoArch()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("arch", "archlinux", "arch-linux")
    FF_LOGO_LINES(
        "                  -`\n"
        "                 .o+`\n"
        "                `ooo/\n"
        "               `+oooo:\n"
        "              `+oooooo:\n"
        "              -+oooooo+:\n"
        "            `/:-:++oooo+:\n"
        "           `/++++/+++++++:\n"
        "          `/++++++++++++++:\n"
        "         `/+++ooooooooooooo/`\n"
        "        ./ooosssso++osssssso+`\n"
        "       .oossssso-````/ossssss+`\n"
        "      -osssssso.      :ssssssso.\n"
        "     :osssssss/        osssso+++.\n"
        "    /ossssssss/        +ssssooo/-\n"
        "  `/ossssso+/:-        -:/+osssso+-\n"
        " `+sso+:-`                 `.-/+oso:\n"
        "`++:.                           `-/+/\n"
        ".`                                 `/";
    )
    FF_LOGO_COLORS(
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoArchSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("arch_small", "archlinux_small", "arch-linux-small")
    FF_LOGO_LINES(
        "      /\\\n"
        "     /  \\\n"
        "    /    \\\n"
        "   /      \\\n"
        "  /   ,,   \\\n"
        " /   |  |   \\\n"
        "/_-''    ''-_\\"
    )
    FF_LOGO_COLORS(
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoArtix()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("artix", "artixlinux", "artix-linux")
    FF_LOGO_LINES(
        "                   '\n"
        "                  'o'\n"
        "                 'ooo'\n"
        "                'ooxoo'\n"
        "               'ooxxxoo'\n"
        "              'oookkxxoo'\n"
        "             'oiioxkkxxoo'\n"
        "            ':;:iiiioxxxoo'\n"
        "               `'.;::ioxxoo'\n"
        "          '-.      `':;jiooo'\n"
        "         'oooio-..     `'i:io'\n"
        "        'ooooxxxxoio:,.   `'-;'\n"
        "       'ooooxxxxxkkxoooIi:-.  `'\n"
        "      'ooooxxxxxkkkkxoiiiiiji'\n"
        "     'ooooxxxxxkxxoiiii:'`     .i'\n"
        "    'ooooxxxxxoi:::'`       .;ioxo'\n"
        "   'ooooxooi::'`         .:iiixkxxo'\n"
        "  'ooooi:'`                `'';ioxxo'\n"
        " 'i:'`                          '':io'\n"
        "'`                                   `'";
    )
    FF_LOGO_COLORS(
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoArtixSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("artix_small", "artixlinux_small", "artix-linux-small")
    FF_LOGO_LINES(
        "      /\\\n"
        "     /  \\\n"
        "    /`'.,\\\n"
        "   /     ',\n"
        "  /      ,`\\\n"
        " /   ,.'`.  \\\n"
        "/.,'`     `'.\\"
    )
    FF_LOGO_COLORS(
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoArcoLinux()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("arco", "arcolinux", "arco-linux")
    FF_LOGO_LINES(
        "                   /-\n"
        "                  ooo:\n"
        "                 yoooo/\n"
        "                yooooooo\n"
        "               yooooooooo\n"
        "              yooooooooooo\n"
        "            .yooooooooooooo\n"
        "           .oooooooooooooooo\n"
        "          .oooooooarcoooooooo\n"
        "         .ooooooooo-oooooooooo\n"
        "        .ooooooooo-  oooooooooo\n"
        "       :ooooooooo.    :ooooooooo\n"
        "      :ooooooooo.      :ooooooooo\n"
        "     :oooarcooo         .oooarcooo\n"
        "    :ooooooooy           .ooooooooo\n"
        "   $1:ooooooooo   $2/ooooooooooooooooooo\n"
        "  $1:ooooooooo      $2.-ooooooooooooooooo.\n"
        "  $1ooooooooo-            $2-ooooooooooooo.\n"
        " $1ooooooooo-                $2.-oooooooooo.\n"
        "$1ooooooooo.                    $2-ooooooooo";
    )
    FF_LOGO_COLORS(
        "34", //blue
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoBedrock()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("bedrock", "bedrocklinux", "bedrock-linux")
    FF_LOGO_LINES(
        "--------------------------------------\n"
        "--------------------------------------\n"
        "--------------------------------------\n"
        "---$2\\\\\\\\\\\\\\\\\\\\\\\\$1-----------------------\n"
        "----$2\\\\\\      \\\\\\$1----------------------\n"
        "-----$2\\\\\\      \\\\\\$1---------------------\n"
        "------$2\\\\\\      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\$1------\n"
        "-------$2\\\\\\                    \\\\\\$1-----\n"
        "--------$2\\\\\\                    \\\\\\$1----\n"
        "---------$2\\\\\\        ______      \\\\\\$1---\n"
        "----------$2\\\\\\                   ///$1---\n"
        "-----------$2\\\\\\                 ///$1----\n"
        "------------$2\\\\\\               ///$1-----\n"
        "-------------$2\\\\\\////////////////$1------\n"
        "--------------------------------------\n"
        "--------------------------------------\n"
        "--------------------------------------"
    )
    FF_LOGO_COLORS(
        "90", //grey
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoCachyOS()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("cachy", "cachyos", "cachy-linux", "cachyos-linux")
    FF_LOGO_LINES(
        "           $3.$1-------------------------:\n"
        "          .$2+=$1========================.\n"
        "         :$2++$1===$2++===$1===============-       :$2++$1-\n"
        "        :$2*++$1====$2+++++==$1===========-        .==:\n"
        "       -$2*+++$1=====$2+***++=$1=========:\n"
        "      =$2*++++=$1=======------------:\n"
        "     =$2*+++++=$1====-                     $3...$1\n"
        "   .$2+*+++++$1=-===:                    .$2=+++=$1:\n"
        "  :$2++++$1=====-==:                     -***$2**$1+\n"
        " :$2++=$1=======-=.                      .=+**+$3.$1\n"
        ".$2+$1==========-.                          $3.$1\n"
        " :$2+++++++$1====-                                $3.$1--==-$3.$1\n"
        "  :$2++$1==========.                             $3:$2+++++++$1$3:\n"
        "   $1.-===========.                            =*****+*+\n"
        "    $1.-===========:                           .+*****+:\n"
        "      $1-=======$2++++$1:::::::::::::::::::::::::-:  $3.$1---:\n"
        "       :======$2++++$1====$2+++******************=.\n"
        "        $1:=====$2+++$1==========$2++++++++++++++*-\n"
        "         $1.====$2++$1==============$2++++++++++*-\n"
        "          $1.===$2+$1==================$2+++++++:\n"
        "           $1.-=======================$2+++:\n"
        "             $3.........................."
    )
    FF_LOGO_COLORS(
        "36", //cyan
        "32", //green
        "30"  //black
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoCelOS()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("cel", "celos", "cel-linux", "celos-linux")
    FF_LOGO_LINES(
        "             `-:/++++/:-`\n"
        "          -/syyyyyyyyyyyyy+-\n"
        "        :ssssyyyyyyyyyyyyyyyy/\n"
        "      .osy$2mmmmmmmmmmmmmmmNNNNNmmhy+\n"
        "     $1.sssshhhhhhhddddddddddddddds-\n"
        "    $1`osssssssyyyyyyyyyyyyyyyyyyhy`\n"
        "    $1:ssssssyyyyyyyyyyyyyyyyyyyyhh/\n"
        "$2sMMMMMMMMMMMMMMMMMMMMMMMh$1yyyyyyhho\n"
        "    :sssssssyyyyyyyyyyyyyyyyyyyhh/\n"
        "    `ssssssssyyyyyyyyyyyyyyyyyyhy.\n"
        "     -sssssyddddddddddddddddddddy\n"
        "      -ssss$2hmmmmmmmmmmmmmmmmmmmyssss-\n"
        "       $1`/ssssyyyyyyyyyyyyyyyy+`\n"
        "         $1`:osyyyyyyyyyyyyys/`\n"
        "            $1`.:/+ooooo+:-`"
    )
    FF_LOGO_COLORS(
        "35", //magenta
        "30" //black
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoCentOS()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("cent", "centos", "cent-linux", "centos-linux")
    FF_LOGO_LINES(
        "                 ..\n"
        "               .PLTJ.\n"
        "              <><><><>\n"
        "     $2KKSSV' 4KKK $1LJ$4 KKKL.'VSSKK\n"
        "     $2KKV' 4KKKKK $1LJ$4 KKKKAL 'VKK\n"
        "     $2V' ' 'VKKKK $1LJ$4 KKKKV' ' 'V\n"
        "     $2.4MA.' 'VKK $1LJ$4 KKV' '.4Mb.\n"
        "   $4. $2KKKKKA.' 'V $1LJ$4 V' '.4KKKKK $3.\n"
        " $4.4D $2KKKKKKKA.'' $1LJ$4 ''.4KKKKKKK $3FA.\n"
        "$4<QDD ++++++++++++  $3++++++++++++ GFD>\n"
        " '$4VD $3KKKKKKKK'.. $2LJ $1..'KKKKKKKK $3FV\n"
        "   $4' $3VKKKKK'. .4 $2LJ $1K. .'KKKKKV $3'\n"
        "      $3'VK'. .4KK $2LJ $1KKA. .'KV'\n"
        "     $3A. . .4KKKK $2LJ $1KKKKA. . .4\n"
        "     $3KKA. 'KKKKK $2LJ $1KKKKK' .4KK\n"
        "     $3KKSSA. VKKK $2LJ $1KKKV .4SSKK\n"
        "              $2<><><><>\n"
        "               $2'MKKM'\n"
        "                 $2''"
    )
    FF_LOGO_COLORS(
        "33", //yellow
        "32", //green
        "34", //blue
        "35", //magenta
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoCentOSSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("cent_small", "centos_small", "cent-linux_small", "cent-linux-small", "centos-linux-small")
    FF_LOGO_LINES(
        " $2____$1^$4____\n"
        " $2|\\  $1|$4  /|\n"
        " $2| \\ $1|$4 / |\n"
        "$4<---- $3---->\n"
        " $3| / $2|$1 \\ |\n"
        " $3|/__$2|$1__\\|\n"
        "     $2v"
    )
    FF_LOGO_COLORS(
        "33", //yellow
        "32", //green
        "34", //blue
        "35" //magenta
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoDebian()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("debian", "debian-linux")
    FF_LOGO_LINES(
        "       $2_,met$$$$$$$$$$gg.\n"
        "    ,g$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$P.\n"
        "  ,g$$$$P\"         \"\"\"Y$$$$.\".\n"
        " ,$$$$P'               `$$$$$$.\n"
        "',$$$$P       ,ggs.     `$$$$b:\n"
        "`d$$$$'     ,$P\"'   $1.$2    $$$$$$\n"
        " $$$$P      d$'     $1,$2    $$$$$$P\n"
        " $$$$:      $$.   $1-$2    ,d$$$$'\n"
        " $$$$;      Y$b._   _,d$P'\n"
        " Y$$$$.    $1`.$2`\"Y$$$$$$$$P\"'\n"
        " `$$$$b      $1\"-.__\n"
        "  $2`Y$$$$\n"
        "   `Y$$$$.\n"
        "     `$$$$b.\n"
        "       `Y$$$$b.\n"
        "          `\"Y$$b._\n"
        "             `\"\"\""
    )
    FF_LOGO_COLORS(
        "31", //red
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoDebianSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("debian_small", "debian-linux-small")
    FF_LOGO_LINES(
        "  _____\n"
        " /  __ \\\n"
        "|  /    |\n"
        "|  \\___-\n"
        "-_\n"
        "  --_"
    )
    FF_LOGO_COLORS(
        "31" //red
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoDevuan()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("devuan", "devuan-linux")
    FF_LOGO_LINES(
        "   ..,,;;;::;,..\n"
        "           `':ddd;:,.\n"
        "                 `'dPPd:,.\n"
        "                     `:b$$b`.\n"
        "                        'P$$$d`\n"
        "                         .$$$$$`\n"
        "                         ;$$$$$P\n"
        "                      .:P$$$$$$`\n"
        "                  .,:b$$$$$$$;'\n"
        "             .,:dP$$$$$$$$b:'\n"
        "      .,:;db$$$$$$$$$$Pd'`\n"
        " ,db$$$$$$$$$$$$$$b:'`\n"
        ":$$$$$$$$$$$$b:'`\n"
        " `$$$$$bd:''`\n"
        "   `'''`\n"
    )
    FF_LOGO_COLORS(
        "35" //magenta
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoDevuanSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("devuan_small", "devuan-linux-small")
    FF_LOGO_LINES(
        " ..:::.\n"
        "    ..-==-\n"
        "        .+#:\n"
        "         =@@\n"
        "      :+%@#:\n"
        ".:=+#@@%*:\n"
        "#@@@#=:\n"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoDeepin()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("deepin", "deepin-linux")
    FF_LOGO_LINES(
        "$1             ............\n"
        "         .';;;;;.       .,;,.\n"
        "      .,;;;;;;;.       ';;;;;;;.\n"
        "    .;::::::::'     .,::;;,''''',.\n"
        "   ,'.::::::::    .;;'.          ';\n"
        "  ;'  'cccccc,   ,' :: '..        .:\n"
        " ,,    :ccccc.  ;: .c, '' :.       ,;\n"
        ".l.     cllll' ., .lc  :; .l'       l.\n"
        ".c       :lllc  ;cl:  .l' .ll.      :'\n"
        ".l        'looc. .   ,o:  'oo'      c,\n"
        ".o.         .:ool::coc'  .ooo'      o.\n"
        " ::            .....   .;dddo      ;c\n"
        "  l:...            .';lddddo.     ,o\n"
        "   lxxxxxdoolllodxxxxxxxxxc      :l\n"
        "    ,dxxxxxxxxxxxxxxxxxxl.     'o,\n"
        "      ,dkkkkkkkkkkkkko;.    .;o;\n"
        "        .;okkkkkdl;.    .,cl:.\n"
        "            .,:cccccccc:,."
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoEndeavour()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("endeavour", "endeavour-linux", "endeavouros", "endeavouros-linux")
    FF_LOGO_LINES(
        "                     $2./$1o$3.\n"
        "                   $2./$1sssso$3-\n"
        "                 $2`:$1osssssss+$3-\n"
        "               $2`:+$1sssssssssso$3/.\n"
        "             $2`-/o$1ssssssssssssso$3/.\n"
        "           $2`-/+$1sssssssssssssssso$3+:`\n"
        "         $2`-:/+$1sssssssssssssssssso$3+/.\n"
        "       $2`.://o$1sssssssssssssssssssso$3++-\n"
        "      $2.://+$1ssssssssssssssssssssssso$3++:\n"
        "    $2.:///o$1ssssssssssssssssssssssssso$3++:\n"
        "  $2`:////$1ssssssssssssssssssssssssssso$3+++.\n"
        "$2`-////+$1ssssssssssssssssssssssssssso$3++++-\n"
        " $2`..-+$1oosssssssssssssssssssssssso$3+++++/`\n"
        "$3./++++++++++++++++++++++++++++++/:.\n"
        "`:::::::::::::::::::::::::------``"
    )
    FF_LOGO_COLORS(
        "35", //magenta
        "31", //red
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoFedora()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("fedora", "fedora-linux")
    FF_LOGO_LINES(
        "             .',;::::;,'.\n"
        "         .';:cccccccccccc:;,.\n"
        "      .;cccccccccccccccccccccc;.\n"
        "    .:cccccccccccccccccccccccccc:.\n"
        "  .;ccccccccccccc;$2.:dddl:.$1;ccccccc;.\n"
        " .:ccccccccccccc;$2OWMKOOXMWd$1;ccccccc:.\n"
        ".:ccccccccccccc;$2KMMc$1;cc;$2xMMc$1;ccccccc:.\n"
        ",cccccccccccccc;$2MMM.$1;cc;$2;WW:$1;cccccccc,\n"
        ":cccccccccccccc;$2MMM.$1;cccccccccccccccc:\n"
        ":ccccccc;$2oxOOOo$1;$2MMM000k.$1;cccccccccccc:\n"
        "cccccc;$20MMKxdd:$1;$2MMMkddc.$1;cccccccccccc;\n"
        "ccccc;$2XMO'$1;cccc;$2MMM.$1;cccccccccccccccc'\n"
        "ccccc;$2MMo$1;ccccc;$2MMW.$1;ccccccccccccccc;\n"
        "ccccc;$20MNc.$1ccc$2.xMMd$1;ccccccccccccccc;\n"
        "cccccc;$2dNMWXXXWM0:$1;cccccccccccccc:,\n"
        "cccccccc;$2.:odl:.$1;cccccccccccccc:,.\n"
        "ccccccccccccccccccccccccccccc:'.\n"
        ":ccccccccccccccccccccccc:;,..\n"
        " ':cccccccccccccccc::;,."
    )
    FF_LOGO_COLORS(
        "34", //blue
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoFedoraSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("fedora_small", "fedora-linux-small")
    FF_LOGO_LINES(
        "        ,'''''.\n"
        "       |   ,.  |\n"
        "       |  |  '_'\n"
        "  ,....|  |..\n"
        ".'  ,_;|   ..'\n"
        "|  |   |  |\n"
        "|  ',_,'  |\n"
        " '.     ,'\n"
        "   '''''"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoFedoraOld()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("fedora_old", "fedora-old", "fedora-linux-old", "fedora-linux_old")
    FF_LOGO_LINES(
        "          /:-------------:\\\n"
        "       :-------------------::\n"
        "     :-----------$2/shhOHbmp$1---:\\\n"
        "   /-----------$2omMMMNNNMMD$1  ---:\n"
        "  :-----------$2sMMMMNMNMP$1.    ---:\n"
        " :-----------$2:MMMdP$1-------    ---\\\n"
        ",------------$2:MMMd$1--------    ---:\n"
        ":------------$2:MMMd$1-------    .---:\n"
        ":----    $2oNMMMMMMMMMNho$1     .----:\n"
        ":--     .$2+shhhMMMmhhy++$1   .------/\n"
        ":-    -------$2:MMMd$1--------------:\n"
        ":-   --------$2/MMMd$1-------------;\n"
        ":-    ------$2/hMMMy$1------------:\n"
        ":--$2 :dMNdhhdNMMNo$1------------;\n"
        ":---$2:sdNMMMMNds:$1------------:\n"
        ":------$2:://:$1-------------::\n"
        ":---------------------://"
    )
    FF_LOGO_COLORS(
        "34", //blue
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoGaruda()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("garuda", "garuda-linux")
    FF_LOGO_LINES(
        "                   .%;888:8898898:\n"
        "                 x;XxXB%89b8:b8%b88:\n"
        "              .8Xxd                8X:.\n"
        "            .8Xx;                    8x:.\n"
        "          .tt8x          .d            x88;\n"
        "       .@8x8;          .db:              xx@;\n"
        "     ,tSXX°          .bbbbbbbbbbbbbbbbbbbB8x@;\n"
        "   .SXxx            bBBBBBBBBBBBBBBBBBBBbSBX8;\n"
        " ,888S                                     pd!\n"
        "8X88/                                       q\n"
        "8X88/\n"
        "GBB.\n"
        " x%88        d888@8@X@X@X88X@@XX@@X@8@X.\n"
        "   dxXd    dB8b8b8B8B08bB88b998888b88x.\n"
        "    dxx8o                      .@@;.\n"
        "      dx88                   .t@x.\n"
        "        d:SS@8ba89aa67a853Sxxad.\n"
        "          .d988999889889899dd."
    )
    FF_LOGO_COLORS(
        "31" //red
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoGentoo()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("gentoo", "gentoo-linux")
    FF_LOGO_LINES(
        "         -/oyddmdhs+:.\n"
        "     -o$2dNMMMMMMMMNNmhy+$1-`\n"
        "   -y$2NMMMMMMMMMMMNNNmmdhy$1+-\n"
        " `o$2mMMMMMMMMMMMMNmdmmmmddhhy$1/`\n"
        " om$2MMMMMMMMMMMN$1hhyyyo$2hmdddhhhd$1o`\n"
        ".y$2dMMMMMMMMMMd$1hs++so/s$2mdddhhhhdm$1+`\n"
        " oy$2hdmNMMMMMMMN$1dyooy$2dmddddhhhhyhN$1d.\n"
        "  :o$2yhhdNNMMMMMMMNNNmmdddhhhhhyym$1Mh\n"
        "    .:$2+sydNMMMMMNNNmmmdddhhhhhhmM$1my\n"
        "       /m$2MMMMMMNNNmmmdddhhhhhmMNh$1s:\n"
        "    `o$2NMMMMMMMNNNmmmddddhhdmMNhs$1+`\n"
        "  `s$2NMMMMMMMMNNNmmmdddddmNMmhs$1/.\n"
        " /N$2MMMMMMMMNNNNmmmdddmNMNdso$1:`\n"
        "+M$2MMMMMMNNNNNmmmmdmNMNdso$1/-\n"
        "yM$2MNNNNNNNmmmmmNNMmhs+/$1-`\n"
        "/h$2MMNNNNNNNNMNdhs++/$1-`\n"
        "`/$2ohdmmddhys+++/:$1.`\n"
        "  `-//////:--."
    )
    FF_LOGO_COLORS(
        "35", //magenta
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoGentooSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("gentoo_small", "gentoo-linux-small")
    FF_LOGO_LINES(
        " _-----_\n"
        "(       \\\n"
        "\\    0   \\\n"
        " $2\\        )\n"
        " /      _/\n"
        "(     _-\n"
        "\\____-"
    )
    FF_LOGO_COLORS(
        "35", //magenta
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoKDENeon()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("kde", "kde-neon", "neon")
    FF_LOGO_LINES(
        "             `..---+/---..`\n"
        "         `---.``   ``   `.---.`\n"
        "      .--.`        ``        `-:-.\n"
        "    `:/:     `.----//----.`     :/-\n"
        "   .:.    `---`          `--.`    .:`\n"
        "  .:`   `--`                .:-    `:.\n"
        " `/    `:.      `.-::-.`      -:`   `/`\n"
        " /.    /.     `:++++++++:`     .:    .:\n"
        "`/    .:     `+++++++++++/      /`   `+`\n"
        "/+`   --     .++++++++++++`     :.   .+:\n"
        "`/    .:     `+++++++++++/      /`   `+`\n"
        " /`    /.     `:++++++++:`     .:    .:\n"
        " ./    `:.      `.:::-.`      -:`   `/`\n"
        "  .:`   `--`                .:-    `:.\n"
        "   .:.    `---`          `--.`    .:`\n"
        "    `:/:     `.----//----.`     :/-\n"
        "      .-:.`        ``        `-:-.\n"
        "         `---.``   ``   `.---.`\n"
        "             `..---+/---..`"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoKISSLinux()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("kiss", "kiss-linux", "kisslinux")
    FF_LOGO_LINES(
        "   $3 ___     \n"
        "   ($2.· $3|     \n"
        "   ($1<> $3|     \n"
        "  / $2__$3  \\    \n"
        " ( $1/  \\ $3/|   \n"
        "$1_$3/\\ $2__)$3/$1_$3)   \n"
        "$1\\/$3-____$1\\/$2    \n"
    )
    FF_LOGO_COLORS(
        "35", //magenta
        "37", //white
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoKubuntu()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("kubuntu", "kubuntu-linux", "kde-ubuntu", "ubuntu-kde", "ubuntu-plasma")
    FF_LOGO_LINES(
        "$1           `.:/ossyyyysso/:.\n"
        "        .:oyyyyyyyyyyyyyyyyyyo:`\n"
        "      -oyyyyyyyo$2dMMy$1yyyyyyysyyyyo-\n"
        "    -syyyyyyyyyy$2dMMy$1oyyyy$2dmMMy$1yyyys-\n"
        "   oyyys$2dMy$1syyyy$2dMMMMMMMMMMMMMy$1yyyyyyo\n"
        " `oyyyy$2dMMMMy$1syysoooooo$2dMMMMy$1yyyyyyyyo`\n"
        " oyyyyyy$2dMMMMy$1yyyyyyyyyyys$2dMMy$1sssssyyyo\n"
        "-yyyyyyyy$2dMy$1syyyyyyyyyyyyyys$2dMMMMMy$1syyy-\n"
        "oyyyysoo$2dMy$1yyyyyyyyyyyyyyyyyy$2dMMMMy$1syyyo\n"
        "yyys$2dMMMMMy$1yyyyyyyyyyyyyyyyyysosyyyyyyyy\n"
        "yyys$2dMMMMMy$1yyyyyyyyyyyyyyyyyyyyyyyyyyyyy\n"
        "oyyyyysos$2dy$1yyyyyyyyyyyyyyyyyy$2dMMMMy$1syyyo\n"
        "-yyyyyyyy$2dMy$1syyyyyyyyyyyyyys$2dMMMMMy$1syyy-\n"
        " oyyyyyy$2dMMMy$1syyyyyyyyyyys$2dMMy$1oyyyoyyyo\n"
        " `oyyyy$2dMMMy$1syyyoooooo$2dMMMMy$1oyyyyyyyyo\n"
        "   oyyysyyoyyyys$2dMMMMMMMMMMMy$1yyyyyyyo\n"
        "    -syyyyyyyyy$2dMMMy$1syyy$2dMMMy$1syyyys-\n"
        "      -oyyyyyyy$2dMMy$1yyyyyysosyyyyo-\n"
        "        ./oyyyyyyyyyyyyyyyyyyo/.\n"
        "           `.:/oosyyyysso/:.`"
    )
    FF_LOGO_COLORS(
        "34", //blue
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoLangitKetujuh()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("l7", "langitketujuh", "LangitKetujuh")
    FF_LOGO_LINES(
	"\n"
	"\n"
	"   $2. '7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7\n"
	"   $2L7.   '7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7\n"
	"   $2L7L7L      7L7L7L7L7L7L7L7L7L7L7L7L7L7\n"
	"   $2L7L7L7                          L7L7L7\n"
	"   $2L7L7L7           'L7L7L7L7L7L7L7L7L7L7\n"
	"   $2L7L7L7               'L7L7L7L7L7L7L7L7\n"
	"   $2L7L7L7                   'L7L7L7L7L7L7\n"
	"   $2L7L7L7                          L7L7L7\n"
	"   $2L7L7L7L7L7L7L7L7L7L7LL7L7L7.    '7L7L7\n"
	"   $2L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L.   'L7\n"
	"   $2L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7L7.  '\n"
    )
    FF_LOGO_COLORS(
        "34", //blue
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoLinux()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("linux", "linux-generic")
    FF_LOGO_LINES(
        "        $2#####\n"
        "       $2#######\n"
        "       $2##$1O$2#$1O$2##\n"
        "       $2#$3#####$2#\n"
        "     $2##$1##$3###$1##$2##\n"
        "    $2#$1##########$2##\n"
        "   $2#$1############$2##\n"
        "   $2#$1############$2###\n"
        "  $3##$2#$1###########$2##$3#\n"
        "$3######$2#$1#######$2#$3######\n"
        "$3#######$2#$1#####$2#$3#######\n"
        "  $3#####$2#######$3#####"
    )
    FF_LOGO_COLORS(
        "37", //white
        "30", //black
        "33" //yellow
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoManjaro()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("manjaro", "manjaro-linux")
    FF_LOGO_LINES(
        "██████████████████  ████████\n"
        "██████████████████  ████████\n"
        "██████████████████  ████████\n"
        "██████████████████  ████████\n"
        "████████            ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████\n"
        "████████  ████████  ████████"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoManjaroSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("manjaro_small", "manjaro-linux-small")
    FF_LOGO_LINES(
        "||||||||| ||||\n"
        "||||||||| ||||\n"
        "||||      ||||\n"
        "|||| |||| ||||\n"
        "|||| |||| ||||\n"
        "|||| |||| ||||\n"
        "|||| |||| ||||"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoMint()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("mint", "linuxmint", "mint-linux", "linux-mint")
    FF_LOGO_LINES(
        "             $2...-:::::-...\n"
        "          .-MMMMMMMMMMMMMMM-.\n"
        "      .-MMMM$1`..-:::::::-..`$2MMMM-.\n"
        "    .:MMMM$1.:MMMMMMMMMMMMMMM:.$2MMMM:.\n"
        "   -MMM$1-M---MMMMMMMMMMMMMMMMMMM.$2MMM-\n"
        " `:MMM$1:MM`  :MMMM:....::-...-MMMM:$2MMM:`\n"
        " :MMM$1:MMM`  :MM:`  ``    ``  `:MMM:$2MMM:\n"
        ".MMM$1.MMMM`  :MM.  -MM.  .MM-  `MMMM.$2MMM.\n"
        ":MMM$1:MMMM`  :MM.  -MM-  .MM:  `MMMM-$2MMM:\n"
        ":MMM$1:MMMM`  :MM.  -MM-  .MM:  `MMMM:$2MMM:\n"
        ":MMM$1:MMMM`  :MM.  -MM-  .MM:  `MMMM-$2MMM:\n"
        ".MMM$1.MMMM`  :MM:--:MM:--:MM:  `MMMM.$2MMM.\n"
        " :MMM$1:MMM-  `-MMMMMMMMMMMM-`  -MMM-$2MMM:\n"
        "  :MMM$1:MMM:`                `:MMM:$2MMM:\n"
        "   .MMM$1.MMMM:--------------:MMMM.$2MMM.\n"
        "     '-MMMM$1.-MMMMMMMMMMMMMMM-.$2MMMM-'\n"
        "       '.-MMMM$1``--:::::--``$2MMMM-.'\n"
        "            '-MMMMMMMMMMMMM-'\n"
        "               ``-:::::-``"
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoMintSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("mint_small", "linuxmint_small", "mint-linux-small")
    FF_LOGO_LINES(
        " __________\n"
        "|_          \\\n"
        "  | $2| _____ $1|\n"
        "  | $2| | | | $1|\n"
        "  | $2| | | | $1|\n"
        "  | $2\\__$2___/ $1|\n"
        "  \\_________/"
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoMintOld()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("mint_old", "mint-old", "mint-linux_old", "mint-linux-old", "linux-mint_old", "linux-mint-old")
    FF_LOGO_LINES(
        "MMMMMMMMMMMMMMMMMMMMMMMMMmds+.\n"
        "MMm----::-://////////////oymNMd+`\n"
        "MMd      $2/++                $1-sNMd:\n"
        "MMNso/`  $2dMM    `.::-. .-::.` $1.hMN:\n"
        "ddddMMh  $2dMM   :hNMNMNhNMNMNh: $1`NMm\n"
        "    NMm  $2dMM  .NMN/-+MMM+-/NMN` $1dMM\n"
        "    NMm  $2dMM  -MMm  `MMM   dMM. $1dMM\n"
        "    NMm  $2dMM  -MMm  `MMM   dMM. $1dMM\n"
        "    NMm  $2dMM  .mmd  `mmm   yMM. $1dMM\n"
        "    NMm  $2dMM`  ..`   ...   ydm. $1dMM\n"
        "    hMM- $2+MMd/-------...-:sdds  $1dMM\n"
        "    -NMm- $2:hNMNNNmdddddddddy/`  $1dMM\n"
        "    -dMNs-$2``-::::-------.``    $1dMM\n"
        "    `/dMNmy+/:-------------:/yMMM\n"
        "      ./ydNMMMMMMMMMMMMMMMMMMMMM\n"
        "          .MMMMMMMMMMMMMMMMMMM"
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoNixOS()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("nixos", "nix", "nixos-linux", "nix-linux", "nix-os", "nix_os", "nix_os_linux")
    FF_LOGO_LINES(
        "$1          ▗▄▄▄       $2▗▄▄▄▄    ▄▄▄▖\n"
        "$1          ▜███▙       $2▜███▙  ▟███▛\n"
        "$1           ▜███▙       $2▜███▙▟███▛\n"
        "$1            ▜███▙       $2▜██████▛\n"
        "$1     ▟█████████████████▙ $2▜████▛     $1▟▙\n"
        "$1    ▟███████████████████▙ $2▜███▙    $1▟██▙\n"
        "$2           ▄▄▄▄▖           ▜███▙  $1▟███▛\n"
        "$2          ▟███▛             ▜██▛ $1▟███▛\n"
        "$2         ▟███▛               ▜▛ $1▟███▛\n"
        "$2▟███████████▛                  $1▟██████████▙\n"
        "$2▜██████████▛                  $1▟███████████▛\n"
        "$2      ▟███▛ $1▟▙               ▟███▛\n"
        "$2     ▟███▛ $1▟██▙             ▟███▛\n"
        "$2    ▟███▛  $1▜███▙           ▝▀▀▀▀\n"
        "$2    ▜██▛    $1▜███▙ $2▜██████████████████▛\n"
        "$2     ▜▛     $1▟████▙ $2▜████████████████▛\n"
        "$1           ▟██████▙       $2▜███▙\n"
        "$1          ▟███▛▜███▙       $2▜███▙\n"
        "$1         ▟███▛  ▜███▙       $2▜███▙\n"
        "$1         ▝▀▀▀    ▀▀▀▀▘       $2▀▀▀▘"
    )
    FF_LOGO_COLORS(
        "34", //blue
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoNixOsOld()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("nixos_old", "nix-old", "nixos-old", "nix_old", "nix-os-old", "nix_os_old")
    FF_LOGO_LINES(
        "$1              ____       $2_______        ____\n"
        "$1             /####\\      $2\\######\\      /####\\\n"
        "$1             ######\\      $2\\######\\    /#####/\n"
        "$1             \\######\\      $2\\######\\  /#####/\n"
        "$1              \\######\\      $2\\######\\/#####/    $1/\\\n"
        "$1               \\######\\      $2\\###########/    $1/##\\\n"
        "$1        ________\\######\\______$2\\#########/    $1/####\\\n"
        "$1       /#######################$2\\#######/    $1/######\n"
        "$1      /#########################$2\\######\\   $1/######/\n"
        "$1     /###########################$2\\######\\ $1/######/\n"
        "$1     ¯¯¯¯¯¯¯¯¯¯¯¯$2/######/$1¯¯¯¯¯¯¯¯¯$2\\######$1/######/\n"
        "$2                /######/           $2\\####$1/######/________\n"
        "$2  _____________/######/             $2\\##$1/################\\\n"
        "$2 /###################/               $2\\$1/##################\\\n"
        "$2 \\##################/$1\\               /###################/\n"
        "$2  \\################/$1##\\             /######/¯¯¯¯¯¯¯¯¯¯¯¯¯\n"
        "$2   ¯¯¯¯¯¯¯¯/######/$1####\\           /######/\n"
        "$2          /######/$1######\\$2_________$1/######/$2____________\n"
        "$2         /######/ $1\\######\\$2###########################/\n"
        "$2        /######/   $1\\######\\$2#########################/\n"
        "$2        ######/    $1/#######\\$2#######################/\n"
        "$2        \\####/    $1/#########\\$2¯¯¯¯¯¯\\######\\¯¯¯¯¯¯¯¯\n"
        "$2         \\##/    $1/###########\\$2      \\######\\\n"
        "$2          \\/    $1/#####/\\######\\$2      \\######\\\n"
        "$1               $1/#####/  \\######\\$2      \\######\\\n"
        "$1              $1/#####/    \\######\\$2      \\######\n"
        "$1              $1\\####/      \\######\\$2      \\####/\n"
        "$1               $1¯¯¯¯        ¯¯¯¯¯¯¯$2       ¯¯¯¯"
    )
    FF_LOGO_COLORS(
        "34", //blue
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoNixOsSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("nixos_small", "nix-small", "nixos-small", "nix_small", "nix-os-small", "nix_os_small")
    FF_LOGO_LINES(
        "$1  \\\\  \\\\ //\n"
        " ==\\\\__\\\\/ //\n"
        "   //   \\\\//\n"
        "==//     //==\n"
        " //\\\\___//\n"
        "// /\\\\  \\\\==\n"
        "  // \\\\  \\\\"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoOpenSuse()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("suse", "opensuse", "open_suse", "open-suse", "suse-linux")
    FF_LOGO_LINES(
        "           $2.;ldkO0000Okdl;.\n"
        "       .;d00xl:^''''''^:ok00d;.\n"
        "     .d00l'                'o00d.\n"
        "   .d0Kd'$1  Okxol:;,.          $2:O0d\n"
        "  .OK$1KKK0kOKKKKKKKKKKOxo:,      $2lKO.\n"
        " ,0K$1KKKKKKKKKKKKKKK0P^$2,,,$1^dx:$2    ;00,\n"
        ".OK$1KKKKKKKKKKKKKKKk'$2.oOPPb.$1'0k.$2   cKO.\n"
        ":KK$1KKKKKKKKKKKKKKK: $2kKx..dd $1lKd$2   'OK:\n"
        "dKK$1KKKKKKKKKOx0KKKd $2^0KKKO' $1kKKc$2   dKd\n"
        "dKK$1KKKKKKKKKK;.;oOKx,..$2^$1..;kKKK0.$2  dKd\n"
        ":KK$1KKKKKKKKKK0o;...^cdxxOK0O/^^'  $2.0K:\n"
        " kKK$1KKKKKKKKKKKKK0x;,,......,;od  $2lKk\n"
        " '0K$1KKKKKKKKKKKKKKKKKKKK00KKOo^  $2c00'\n"
        "  'kK$1KKOxddxkOO00000Okxoc;''   $2.dKk'\n"
        "    l0Ko.                    .c00l'\n"
        "     'l0Kk:.              .;xK0l'\n"
        "        'lkK0xl:;,,,,;:ldO0kl'\n"
        "            '^:ldxkkkkxdl:^'"
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoOpenSuseSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("suse_small", "opensuse_small", "open_suse_small", "open-suse_small")
    FF_LOGO_LINES(
        "  _______\n"
        "__|   __ \\\n"
        "     / .\\ \\\n"
        "     \\__/ |\n"
        "   _______|\n"
        "   \\_______\n"
        "__________/"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoOpenSuseLeap()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("opensuse_leap", "open_suse_leap", "opensuse-leap", "open-suse-leap", "suse_leap", "suse-leap", "opensuseleap")
    FF_LOGO_LINES(
        "                 $2.-++:.\n"
        "               ./oooooo/-\n"
        "            `:oooooooooooo:.\n"
        "          -+oooooooooooooooo+-`\n"
        "       ./oooooooooooooooooooooo/-\n"
        "      :oooooooooooooooooooooooooo:\n"
        "    `  `-+oooooooooooooooooooo/-   `\n"
        " `:oo/-   .:ooooooooooooooo+:`  `-+oo/.\n"
        "`/oooooo:.   -/oooooooooo/.   ./oooooo/.\n"
        "  `:+ooooo+-`  `:+oooo+-   `:oooooo+:`\n"
        "     .:oooooo/.   .::`   -+oooooo/.\n"
        "        -/oooooo:.    ./oooooo+-\n"
        "          `:+ooooo+-:+oooooo:`\n"
        "             ./oooooooooo/.\n"
        "                -/oooo+:`\n"
        "                  `:/."
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoOpenSuseTumbleweed()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("opensuse_tumbleweed", "open_suse_tumbleweed", "opensuse-tumbleweed", "open-suse-tumbleweed", "suse_tumbleweed", "suse-tumbleweed", "opensusetumbleweed")
    FF_LOGO_LINES(
        "                                    $2......\n"
        "     .,cdxxxoc,.               .:kKMMMNWMMMNk:.\n"
        "    cKMMN0OOOKWMMXo. ;        ;0MWk:.      .:OMMk.\n"
        "  ;WMK;.       .lKMMNM,     :NMK,             .OMW;\n"
        " cMW;            'WMMMN   ,XMK,                 oMM'\n"
        ".MMc               ..;l. xMN:                    KM0\n"
        "'MM.                   'NMO                      oMM\n"
        ".MM,                 .kMMl                       xMN\n"
        " KM0               .kMM0. .dl:,..               .WMd\n"
        " .XM0.           ,OMMK,    OMMMK.              .XMK\n"
        "   oWMO:.    .;xNMMk,       NNNMKl.          .xWMx\n"
        "     :ONMMNXMMMKx;          .  ,xNMWKkxllox0NMWk,\n"
        "         .....                    .:dOOXXKOxl,"
    )
    FF_LOGO_COLORS(
        "32", //green
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoPop()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("pop", "popos", "pop_os", "pop-linux")
    FF_LOGO_LINES(
        "             /////////////\n"
        "         /////////////////////\n"
        "      ///////$2*767$1////////////////\n"
        "    //////$27676767676*$1//////////////\n"
        "   /////$276767$1//$27676767$1//////////////\n"
        "  /////$2767676$1///$2*76767$1///////////////\n"
        " ///////$2767676$1///$276767$1.///$27676*$1///////\n"
        "/////////$2767676$1//$276767$1///$2767676$1////////\n"
        "//////////$276767676767$1////$276767$1/////////\n"
        "///////////$276767676$1//////$27676$1//////////\n"
        "////////////,$27676$1,///////$2767$1///////////\n"
        "/////////////*$27676$1///////$276$1////////////\n"
        "///////////////$27676$1////////////////////\n"
        " ///////////////$27676$1///$2767$1////////////\n"
        "  //////////////////////$2'$1////////////\n"
        "   //////$2.7676767676767676767,$1//////\n"
        "    /////$2767676767676767676767$1/////\n"
        "      ///////////////////////////\n"
        "         /////////////////////\n"
        "             /////////////"
    )
    FF_LOGO_COLORS(
        "36", //cyan
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoPopSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("pop_small", "popos_small", "pop_os_small", "pop-linux-small")
    FF_LOGO_LINES(
        "______\n"
        "\\   _ \\        __\n"
        " \\ \\ \\ \\      / /\n"
        "  \\ \\_\\ \\    / /\n"
        "   \\  ___\\  /_/\n"
        "    \\ \\    _\n"
        "   __\\_\\__(_)_\n"
        "  (___________)`"
    )
    FF_LOGO_COLORS(
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoReborn()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("reborn", "reborn-os", "rebornos", "rebornos-linux", "reborn-os-linux")
    FF_LOGO_LINES(
        "            :::::::::::::::::::::::\n"
        "          .:^!!!!!!!!!^.^!!!!!!!!!^:.\n"
        "         .:~!!!!!!!!!!^.^!!!!!!!!!!~:.\n"
        "        .:~!!!!!~~~~~~^.^~~~~~~!!!!!~:.\n"
        "       .^!!!!!~::$2=====:.:=====$1::~!!!!!^.\n"
        "     .::^~~!!~:$2^77777?~.~?77777^$1:~!!~~^::.\n"
        "    .:~~^:::^.$2^77777!!^.^7!77777^$1.^:::^~~:.\n"
        "   .:~!!!!~::::$2^~!!::^^^^^::!!~^$1::::~!!!!~:.\n"
        "  .^!!!!!~::$2!7!~^:.^?JJJJJ?^.:^~!7!$1::~!!!!!^.\n"
        ".:^!!!!!~:$2^77777~.~JJJJJJJJJ~.~77777^$1:~!!!!!^:.\n"
        ".:^!!!!!~:$2^77777~.~JJJJJJJJJ~.~77777^$1:~!!!!!^:.\n"
        "  .^!!!!!~::$2!7!~^:.^?JJJJJ?^.:^~!7!$1::~!!!!!^.\n"
        "   .:~!!!!~::$2::^~!!::^^^^^::!!~^::$1::~!!!!~:.\n"
        "    .:~~^:::^.$2^77777!!^.^7!77777^.$1^:::^~~:.\n"
        "     .::^~~!!~:$2^77777?~.~?77777^$1:~!!~~^::.\n"
        "       .^!!!!!~::$2=====:.:=====$1::~!!!!!^.\n"
        "        .:~!!!!!~~~~~~^.^~~~~~~!!!!!~:.\n"
        "         .:~!!!!!!!!!!^.^!!!!!!!!!!~:.\n"
        "          .:^!!!!!!!!!^.^!!!!!!!!!^:.\n"
        "            :::::::::::::::::::::::\n"
    )
    FF_LOGO_COLORS(
        "34", //blue
        "36" //cyan
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoRebornSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("reborn_small", "reborn-os-small", "rebornos_small", "rebornos-linux-small", "reborn-os-linux-small")
    FF_LOGO_LINES(
        "     _______________\n"
        "    /  \\         /  \\\n"
        "   /    \\_______/    \\\n"
        "  /    / \\     / \\    \\\n"
        " /    /   \\___/   \\    \\\n"
        "/____/____/   \\____\\____\\\n"
        "\\    \\    \\___/    /    /\n"
        " \\    \\  /     \\  /    /\n"
        "  \\    \\/_______\\/    /\n"
        "   \\   /         \\   /\n"
        "    \\_/___________\\_/\n"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoRedHatEnterpriseLinux()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("rhel", "redhat", "redhat-linux")
    FF_LOGO_LINES(
        "           .MMM..:MMMMMMM\n"
        "          MMMMMMMMMMMMMMMMMM\n"
        "          MMMMMMMMMMMMMMMMMMMM.\n"
        "         MMMMMMMMMMMMMMMMMMMMMM\n"
        "        ,MMMMMMMMMMMMMMMMMMMMMM:\n"
        "        MMMMMMMMMMMMMMMMMMMMMMMM\n"
        "  .MMMM'  MMMMMMMMMMMMMMMMMMMMMM\n"
        " MMMMMM    `MMMMMMMMMMMMMMMMMMMM.\n"
        "MMMMMMMM      MMMMMMMMMMMMMMMMMM .\n"
        "MMMMMMMMM.       `MMMMMMMMMMMMM' MM.\n"
        "MMMMMMMMMMM.                     MMMM\n"
        "`MMMMMMMMMMMMM.                 ,MMMMM.\n"
        " `MMMMMMMMMMMMMMMMM.          ,MMMMMMMM.\n"
        "    MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
        "      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM:\n"
        "         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
        "            `MMMMMMMMMMMMMMMMMMMMMMMM:\n"
        "                ``MMMMMMMMMMMMMMMMM'"
    )
    FF_LOGO_COLORS(
        "31" //red
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoRedstarOS()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("redstar", "redstar-os", "redstaros", "redstaros-linux", "redstar-os-linux")
    FF_LOGO_LINES(
        "$1                    ..\n"
        "                  .oK0l\n"
        "                 :0KKKKd.\n"
        "               .xKO0KKKKd\n"
        "              ,Od' .d0000l\n"
        "             .c;.   .'''...           ..'.\n"
        ".,:cloddxxxkkkkOOOOkkkkkkkkxxxxxxxxxkkkx:\n"
        ";kOOOOOOOkxOkc'...',;;;;,,,'',;;:cllc:,.\n"
        " .okkkkd,.lko  .......',;:cllc:;,,'''''.\n"
        "   .cdo. :xd' cd:.  ..';'',,,'',,;;;,'.\n"
        "      . .ddl.;doooc'..;oc;'..';::;,'.\n"
        "        coo;.oooolllllllcccc:'.  .\n"
        "       .ool''lllllccccccc:::::;.\n"
        "       ;lll. .':cccc:::::::;;;;'\n"
        "       :lcc:'',..';::::;;;;;;;,,.\n"
        "       :cccc::::;...';;;;;,,,,,,.\n"
        "       ,::::::;;;,'.  ..',,,,'''.\n"
        "        ........          ......"
    )
    FF_LOGO_COLORS(
        "31" //red
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoRockyLinux()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("rocky", "rocky-linux", "rockylinux")
    FF_LOGO_LINES(
        "          __wgliliiligw_,\n"
        "       _williiiiiiliilililw,\n"
        "     _%iiiiiilililiiiiiiiiiii_\n"
        "   .Qliiiililiiiiiiililililiilm.\n"
        "  _iiiiiliiiiiililiiiiiiiiiiliil,\n"
        " .lililiiilililiiiilililililiiiii,\n"
        "_liiiiiiliiiiiiiliiiiiF{iiiiiilili,\n"
        "jliililiiilililiiili@`  ~ililiiiiiL\n"
        "iiiliiiiliiiiiiili>`      ~liililii\n"
        "liliiiliiilililii`         -9liiiil\n"
        "iiiiiliiliiiiii~             ''4lili\n"
        "4ililiiiiilil~|      -w,       )4lf\n"
        "-liiiiililiF'       _liig,       )'\n"
        " )iiiliii@`       _QIililig,\n"
        "  )iiii>`       .Qliliiiililw\n"
        "   )<>~       .mliiiiiliiiiiil,\n"
        "            _gllilililiililii~\n"
        "           giliiiiiiiiiiiiT`\n"
        "          -^~$ililili@~~'"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoRosaLinux()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("rosa", "rosa-linux", "rosalinux")
    FF_LOGO_LINES(
        "            ROSAROSAROSAROSAR\n"
        "        ROSA               AROS\n"
        "      ROS   SAROSAROSAROSAR   AROS\n"
        "    RO   ROSAROSAROSAROSAROSAR   RO\n"
        "  ARO  AROSAROSAROSARO      AROS  ROS\n"
        " ARO  ROSAROS         OSAR   ROSA  ROS\n"
        " RO  AROSA   ROSAROSAROSA    ROSAR  RO\n"
        "RO  ROSAR  ROSAROSAROSAR  R  ROSARO  RO\n"
        "RO  ROSA  AROSAROSAROSA  AR  ROSARO  AR\n"
        "RO AROS  ROSAROSAROSA   ROS  AROSARO AR\n"
        "RO AROS  ROSAROSARO   ROSARO  ROSARO AR\n"
        "RO  ROS  AROSAROS   ROSAROSA AROSAR  AR\n"
        "RO  ROSA  ROS     ROSAROSAR  ROSARO  RO\n"
        " RO  ROS     AROSAROSAROSA  ROSARO  AR\n"
        " ARO  ROSA   ROSAROSAROS   AROSAR  ARO\n"
        "  ARO  OROSA      R      ROSAROS  ROS\n"
        "    RO   AROSAROS   AROSAROSAR   RO\n"
        "     AROS   AROSAROSAROSARO   AROS\n"
        "        ROSA               SARO\n"
        "           ROSAROSAROSAROSAR"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoUbuntu()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("ubuntu", "ubuntu-linux")
    FF_LOGO_LINES(
        "             .-/+oossssoo+/-.\n"
        "         `:+ssssssssssssssssss+:`\n"
        "       -+ssssssssssssssssssyyssss+-\n"
        "     .ossssssssssssssssssd$2MMMNy$1sssso.\n"
        "   /sssssssssss$2hdmmNNmmyNMMMMh$1ssssss/\n"
        "  +sssssssss$2hmydMMMMMMMNddddy$1ssssssss+\n"
        " /ssssssss$2hNMMMyhhyyyyhmNMMMNh$1ssssssss/\n"
        ".ssssssss$2dMMMNh$1ssssssssss$2hNMMMd$1ssssssss.\n"
        "+ssss$2hhhyNMMNy$1ssssssssssss$2yNMMMy$1sssssss+\n"
        "oss$2yNMMMNyMMh$1ssssssssssssss$2hmmmh$1ssssssso\n"
        "oss$2yNMMMNyMMh$1ssssssssssssss$2hmmmh$1ssssssso\n"
        "+ssss$2hhhyNMMNy$1ssssssssssss$2yNMMMy$1sssssss+\n"
        ".ssssssss$2dMMMNh$1ssssssssss$2hNMMMd$1ssssssss.\n"
        " /ssssssss$2hNMMMyhhyyyyhdNMMMNh$1ssssssss/\n"
        "  +sssssssss$2dmydMMMMMMMMddddy$1ssssssss+\n"
        "   /sssssssssss$2hdmNNNNmyNMMMMh$1ssssss/\n"
        "    .ossssssssssssssssss$2dMMMNy$1sssso.\n"
        "     -+sssssssssssssssss$2yyy$1ssss+-\n"
        "       `:+ssssssssssssssssss+:`\n"
        "           .-/+oossssoo+/-."
    )
    FF_LOGO_COLORS(
        "31", //red
        "37" //white
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoUbuntuSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("ubuntu_small", "ubuntu-linux-small")
    FF_LOGO_LINES(
        "         _\n"
        "     ---(_)\n"
        " _/  ---  \\\n"
        "(_) |   |\n"
        "  \\  --- _/\n"
        "     ---(_)"
    )
    FF_LOGO_COLORS(
        "31" //red
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoVoid()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("void", "void-linux")
    FF_LOGO_LINES(
        "                __.;=====;.__\n"
        "            _.=+==++=++=+=+===;.\n"
        "             -=+++=+===+=+=+++++=_\n"
        "        .     -=:``     `--==+=++==.\n"
        "       _vi,    `            --+=++++:\n"
        "      .uvnvi.       _._       -==+==+.\n"
        "     .vvnvnI`    .;==|==;.     :|=||=|.\n"
        "$2+QmQQm$1pvvnv;$2 _yYsyQQWUUQQQm #QmQ#$1:$2QQQWUV$QQm.\n"
        " $2-QQWQW$1pvvo$2wZ?.wQQQE$1==<$2QWWQ/QWQW.QQWW$1(:$2 jQWQE\n"
        "  $2-$QQQQmmU'  jQQQ$1@+=<$2QWQQ)mQQQ.mQQQC$1+;$2jWQQ@'\n"
        "   $2-$WQ8Y$1nI:$2   QWQQwgQQWV$1`$2mWQQ.jQWQQgyyWW@!\n"
        "     $1-1vvnvv.     `~+++`        ++|+++\n"
        "      +vnvnnv,                 `-|===\n"
        "       +vnvnvns.           .      :=-\n"
        "        -Invnvvnsi..___..=sv=.     `\n"
        "          +Invnvnvnnnnnnnnvvnn;.\n"
        "            ~|Invnvnvvnvvvnnv}+`\n"
        "               -~|{*l}*|~"
    )
    FF_LOGO_COLORS(
        "32", //green
        "30" //black
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoVoidSmall()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("void_small", "void-linux-small")
    FF_LOGO_LINES(
        "    _______\n"
        " _ \\______ -\n"
        "| \\  ___  \\ |\n"
        "| | /   \\ | |\n"
        "| | \\___/ | |\n"
        "| \\______ \\_|\n"
        " -_______\\"
    )
    FF_LOGO_COLORS(
        "32" //green
    )
    FF_LOGO_RETURN
}

static const FFlogo* getLogoZorin()
{
    FF_LOGO_INIT
    FF_LOGO_NAMES("zorin", "zorin-linux", "zorinos", "zorinos-linux")
    FF_LOGO_LINES(
        "        `osssssssssssssssssssso`\n"
        "       .osssssssssssssssssssssso.\n"
        "      .+oooooooooooooooooooooooo+.\n"
        "\n"
        "\n"
        "  `::::::::::::::::::::::.         .:`\n"
        " `+ssssssssssssssssss+:.`     `.:+ssso`\n"
        ".ossssssssssssssso/.       `-+ossssssso.\n"
        "ssssssssssssso/-`      `-/osssssssssssss\n"
        ".ossssssso/-`      .-/ossssssssssssssso.\n"
        " `+sss+:.      `.:+ssssssssssssssssss+`\n"
        "  `:.         .::::::::::::::::::::::`\n"
        "\n"
        "\n"
        "      .+oooooooooooooooooooooooo+.\n"
        "       -osssssssssssssssssssssso-\n"
        "        `osssssssssssssssssssso`"
    )
    FF_LOGO_COLORS(
        "34" //blue
    )
    FF_LOGO_RETURN
}

GetLogoMethod* ffLogoBuiltinGetAll()
{
    static GetLogoMethod logoMethods[] = {
        ffLogoBuiltinGetUnknown,
        getLogoNone,
        getLogoAlpine,
        getLogoAlpineSmall,
        getLogoAndroid,
        getLogoAndroidSmall,
        getLogoArch,
        getLogoArchSmall,
        getLogoArcoLinux,
        getLogoArtix,
        getLogoArtixSmall,
        getLogoBedrock,
        getLogoCachyOS,
        getLogoCelOS,
        getLogoCentOS,
        getLogoCentOSSmall,
        getLogoDebian,
        getLogoDevuan,
        getLogoDevuanSmall,
        getLogoDebianSmall,
        getLogoDeepin,
        getLogoEndeavour,
        getLogoFedora,
        getLogoFedoraSmall,
        getLogoFedoraOld,
        getLogoGaruda,
        getLogoGentoo,
        getLogoGentooSmall,
        getLogoKDENeon,
        getLogoKISSLinux,
        getLogoKubuntu,
        getLogoLangitKetujuh,
        getLogoLinux,
        getLogoManjaro,
        getLogoManjaroSmall,
        getLogoMint,
        getLogoMintSmall,
        getLogoMintOld,
        getLogoNixOS,
        getLogoNixOsOld,
        getLogoNixOsSmall,
        getLogoOpenSuse,
        getLogoOpenSuseSmall,
        getLogoOpenSuseLeap,
        getLogoOpenSuseTumbleweed,
        getLogoPop,
        getLogoPopSmall,
        getLogoReborn,
        getLogoRebornSmall,
        getLogoRedHatEnterpriseLinux,
        getLogoRedstarOS,
        getLogoRockyLinux,
        getLogoRosaLinux,
        getLogoUbuntu,
        getLogoUbuntuSmall,
        getLogoVoid,
        getLogoVoidSmall,
        getLogoZorin,
        NULL
    };

    return logoMethods;
}
