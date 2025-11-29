@class NSString;
@protocol IESLivePiperProtocol;

@interface PuzzleStateObserveBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)__updateStateObserveCallHandler;
- (id /* block */)__getCurrentStateCallHandler;
- (id)getCurrentStateCenter;
- (void).cxx_destruct;

@end
