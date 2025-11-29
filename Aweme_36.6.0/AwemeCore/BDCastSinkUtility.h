@interface BDCastSinkUtility : NSObject

+ (BOOL)isOverseas;
+ (BOOL)ipv4Valid:(id)a0;
+ (id)stringByEscapingIpString:(id)a0;
+ (id)getSdkTypeDescription:(long long)a0;
+ (void)printAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
+ (id)deviceName;
+ (id)systemVersion;
+ (id)platform;
+ (id)getIPAddress;

@end
