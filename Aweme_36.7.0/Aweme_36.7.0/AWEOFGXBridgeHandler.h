@class NSString, AWEOFGBridge, BDXBridgeExecutor;

@interface AWEOFGXBridgeHandler : NSObject <AWEOFGJSBridgeHandlerProtocol>

@property (retain, nonatomic) AWEOFGBridge *bridge;
@property (weak, nonatomic) BDXBridgeExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessage:(id)a0 resultHandler:(id /* block */)a1;
- (id /* block */)callHandlerWithMessage:(id)a0 container:(id)a1;
- (BOOL)useMainThreadHandleMessage:(id)a0 container:(id)a1;
- (void).cxx_destruct;
- (id)initWithExecutor:(id)a0;

@end
