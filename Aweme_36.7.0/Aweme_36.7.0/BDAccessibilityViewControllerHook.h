@class NSString;

@interface BDAccessibilityViewControllerHook : NSObject <UIViewControllerBDHookProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)awe_setupVoiceOverHook;
+ (void)viewControllerViewDidLoad:(id)a0;
+ (void)viewControllerViewDidLayoutSubviews:(id)a0;


@end
