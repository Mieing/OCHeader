@class NSString;
@protocol IESLiveAuthorizationControllerProvider;

@interface IESLiveAuthorizationPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)vcdAuthorizeCallHandler;
- (void).cxx_destruct;

@end
