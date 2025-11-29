@class NSString, AWEOFGBridge, BDXBridgeJSBridgeCoreExecutor;

@interface AWEOFGIESBridgeHandler : NSObject <AWEOFGJSBridgeHandlerProtocol>

@property (retain, nonatomic) AWEOFGBridge *bridge;
@property (weak, nonatomic) BDXBridgeJSBridgeCoreExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statusMessageWithStatusCode:(long long)a0;
- (void)handleMessage:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)enableIesBridgeEngine;
- (id)convertBridgeWithCallMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithExecutor:(id)a0;

@end
