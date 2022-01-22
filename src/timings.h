#ifdef GreenWorks40V //Timing array for 40V (29462) - Tested with Greenworks Battery. GW and other must works too.
const int pulseLength[][2] = {
    {1, 412},
    {3, 205},
    {13, 105},
    {3, 205},
    {5, 105},
};
#endif
#ifdef Greenworks40VRAW //Timing array for 40V 6Ah (real 3Ah) Aftersale (29462) - read out from battery, working!
const int pulseLength[][2] = {
    {1, 412},
    {24, 105},
};
#ifdef GreenWorks60V //Timing array for 60V Powerworks - untested from https://endless-sphere.com/forums/viewtopic.php?f=1&t=79384&sid=8676384e4fca92f832bd25d3e6a08a04&start=100#p1559001
const int pulseLength[][2] = {
    {1, 412},
    {3, 205},
    {9, 105},
    {1, 205},
    {4, 105},
    {4, 205},
    {3, 105},
};
#endif
#ifdef PowerWorks60V //Timing array for 60V Greenworks - untested from https://endless-sphere.com/forums/viewtopic.php?f=1&t=79384&sid=8676384e4fca92f832bd25d3e6a08a04&start=100#p1658589
const int pulseLength[][2] = {
    {1, 412},
    {3, 205},
    {8, 105},
    {2, 205},
    {3, 105},
    {4, 205},
    {3, 105},
};
#endif
