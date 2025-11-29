@class NSDictionary, UIViewController, NSString;

@interface BDPBindingUIWidgetModule : NSObject <BDPCommonBridgeModule>

@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;

@property (weak, nonatomic) UIViewController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)hideToast;
- (id)showActionSheet:(id)a0;
- (id)showModal:(id)a0;
- (id)showToast:(id)a0;
- (void).cxx_destruct;

@end
