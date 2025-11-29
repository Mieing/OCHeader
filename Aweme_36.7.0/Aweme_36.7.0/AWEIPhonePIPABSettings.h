@interface AWEIPhonePIPABSettings : NSObject

+ (BOOL)shouldBGSmallWindowPause;
+ (BOOL)enableExternalPIP;
+ (BOOL)enableDelayUpdatePiPDefaultState;
+ (BOOL)enableDecreaseUpdate;
+ (BOOL)enableMuteKeepPiP;
+ (BOOL)enableDecreaseCanAuto;
+ (unsigned long long)backgroundPlaySmallWindowConfig;
+ (id)iPhonePIPConfig;
+ (BOOL)enableExternalPIPDefaultOn;
+ (BOOL)enableDelayUpdatePiPState;
+ (BOOL)enablePiPGuide;

@end
