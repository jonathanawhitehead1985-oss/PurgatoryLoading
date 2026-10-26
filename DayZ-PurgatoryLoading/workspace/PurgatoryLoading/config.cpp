class CfgPatches
{
    class PurgatoryLoading
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
    };
};

class CfgMods
{
    class PurgatoryLoading
    {
        dir = "PurgatoryLoading";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "PurgatoryLoading";
        credits = "Purgatory";
        author = "Purgatory";
        authorID = "0";
        version = "1.0";
        extra = 0;
        type = "mod";

        dependencies[] = {"Game", "World", "Mission"};

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"PurgatoryLoading/scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"PurgatoryLoading/scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"PurgatoryLoading/scripts/5_Mission"};
            };
        };
    };
};
