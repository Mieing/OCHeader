@interface WCDeviceUtil : NSObject

+ (id)parseWCDeviceMsg:(id)a0;
+ (long long)genTaskId;
+ (unsigned int)getDeviceBoundRelationshipVersion;
+ (BOOL)saveDeviceBoundRelationshipVersion:(unsigned int)a0;
+ (unsigned int)hashString:(id)a0;
+ (BOOL)parseConnectProto:(id)a0 :(id)a1;
+ (struct AccessoryCmd { unsigned short x0; unsigned short x1; long long x2; struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x3; struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x4; } *)deepCopyAccessoryCmd:(struct AccessoryCmd { unsigned short x0; unsigned short x1; long long x2; struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x3; struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x4; } *)a0;
+ (id)parseDeviceRankMessageXML:(id)a0;
+ (id)parseDeviceLikeMessageXML:(id)a0;
+ (BOOL)isInternalSportBrand:(id)a0;
+ (id)displayNameFromDevice:(id)a0;
+ (id)deviceFromHardDevice:(id)a0 DeviceAttr:(id)a1;
+ (unsigned int)getUploadStepBeginTime;
+ (id)deviceFromILinkDeviceInfo:(id)a0;

@end
