@class IESLiveGameOpenPlatformSonicBridge;

@interface IESLiveGameOpenPlatformSonicMessageAdaptor : IESLiveGameOpenPlatformMessageAdaptor

@property (retain, nonatomic) IESLiveGameOpenPlatformSonicBridge *bridge;

- (void)didReceiveEvent:(id)a0 params:(id)a1;
- (void)didReceiveMessageFromContainer:(id)a0 callback:(id /* block */)a1;
- (void)registerEnableinvocation;
- (void)registerMethodHandlerWithBridge:(id)a0;
- (void).cxx_destruct;

@end
