/*
    KP LIBERATION MODULE FUNCTIONS

    File: functions.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-09-10
    Last Update: 2019-09-10
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html
    Public: No

    Description:
        Defines for all functions, which are brought by this module.
*/

class mission {
    file = "modules\28_captive\fnc";

    // Checks the given sector for remaining enemys and sets them into captive mode
    class captive_checkSector {};

    // Module post initialization
    class captive_postInit {
        postInit = 1;
    };

    // Module pre initialization
    class captive_preInit {
        preInit = 1;
    };

};
