@class NSString;
@protocol IESLivePortalActions;

@interface IESLivePortalPiperHandler : NSObject <IESLivePiperHandlerProtocol, IESLiveAnnieXBridgeMethodsDependencyProtocol>

@property (retain, nonatomic) id<IESLivePortalActions> actionCreator;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)portalActionCallHandler;
- (void).cxx_destruct;

@end
