@class NSString, UIViewController;

@interface CJPayBridgePlugin_ttpay : TTBridgePlugin <CJPayAPIDelegate>

@property (copy, nonatomic) id /* block */ bridgeCallback;
@property (weak, nonatomic) UIViewController *webVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

@end
