@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLiveLottieAnimationPiperHandler : NSObject <IESLivePiperHandlerProtocol, IESLiveAnnieXBridgeMethodsDependencyProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)lottieAnimationCallHandler;
- (id /* block */)finishLottieAnimationCallHandler;
- (id /* block */)startAnimationEventCallHandler;
- (void).cxx_destruct;

@end
