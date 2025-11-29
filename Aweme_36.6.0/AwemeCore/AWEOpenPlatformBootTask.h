@class NSString;

@interface AWEOpenPlatformBootTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerAuthSDKService;
+ (void)registerABSDKExperiment;
+ (void)execute;


@end
