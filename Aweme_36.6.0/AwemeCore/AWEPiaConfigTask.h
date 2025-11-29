@class NSString;

@interface AWEPiaConfigTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDelay;
+ (void)tabBarControllerViewDidAppear;
+ (void)registerPIAPlugin;
+ (void)execute;


@end
