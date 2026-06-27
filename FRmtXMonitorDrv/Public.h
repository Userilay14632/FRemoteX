/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    driver and application

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_FRmtXMonitorDrv,
    0x298bed79,0x5fa1,0x409a,0xaf,0x90,0x09,0x3e,0x0b,0x42,0x14,0xb6);
// {298bed79-5fa1-409a-af90-093e0b4214b6}
