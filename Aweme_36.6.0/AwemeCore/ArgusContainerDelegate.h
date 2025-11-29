@class NSString;

@interface ArgusContainerDelegate : NSObject <BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configSecureParamsWithWebView:(id)a0 withViewParams:(id)a1;

- (void)containerDidCreated:(id)a0 view:(id)a1;

@end
