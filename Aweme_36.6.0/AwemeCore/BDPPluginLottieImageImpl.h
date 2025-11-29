@class NSString;

@interface BDPPluginLottieImageImpl : NSObject <BDPLottieImagePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)createLottieViewWithModel:(id)a0;
- (id)createLottieViewWithModelFromWeb:(id)a0;

@end
