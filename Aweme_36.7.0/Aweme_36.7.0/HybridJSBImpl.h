@class NSString, UIView;
@protocol HybridKitViewProtocol;

@interface HybridJSBImpl : NSObject <HybridJSBServiceProtocol>

@property (weak, nonatomic) UIView<HybridKitViewProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hybrid_service_register;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)setUpBridgeWithViewInstance:(id)a0;
- (void)registerBridgeMethods:(id)a0;
- (void)registerBridgeMethodInstances:(id)a0;
- (id)bridgeMethodInstanceWithName:(id)a0;
- (void).cxx_destruct;
- (id)containerID;

@end
