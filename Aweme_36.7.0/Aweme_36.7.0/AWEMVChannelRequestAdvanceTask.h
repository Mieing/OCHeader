@class NSString;

@interface AWEMVChannelRequestAdvanceTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)verifyDeviceID;
+ (BOOL)enableGetDeviceInfo;
+ (BOOL)canInstallDY;
+ (void)execute;


@end
