@class NSString;

@interface AWEVideoAudioSDKABInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initAudioSDKAB;
+ (id)audioSDKABStringConfig;
+ (id)audioSDKABIntConfig;
+ (id)audioSDKABBoolConfig;
+ (id)audioSDKABFloatConfig;
+ (void)execute;


@end
