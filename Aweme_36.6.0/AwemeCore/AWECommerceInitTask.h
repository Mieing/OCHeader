@class NSString;

@interface AWECommerceInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAdLaunchTaskStable;
+ (BOOL)shouldDelay;
+ (void)tabBarControllerViewDidAppear;
+ (BOOL)isCommerceInitTaskOpt;
+ (void)setupCommerceWithOptimize:(BOOL)a0;
+ (void)commerceNonUITask;
+ (void)execute;


@end
