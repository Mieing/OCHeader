@class NSString;

@interface AWEAPMInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)feedTabBarDidSwitchTab:(id)a0;
+ (void)bottomTabBarDidSwitchTab:(id)a0;
+ (void)setupAPM;
+ (void)bottomTabBarDidChangeSelectedIndex:(id)a0;
+ (void)p_uploadLaunchInfo;
+ (void)open_bdfishhook;
+ (void)execute;


@end
