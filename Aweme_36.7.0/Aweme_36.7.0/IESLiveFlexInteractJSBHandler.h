@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLiveFlexInteractJSBHandler : NSObject <IESLivePiperHandlerProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)interactiveBannerShowCallHandler;
- (id /* block */)interactiveSetStorageCallHandler;
- (id /* block */)interactiveGetStorageCallHandler;
- (id /* block */)getSeiInfoCallHandler;
- (id /* block */)getVSPlayerDataCallHandler;
- (BOOL)isInPaywallRoom;
- (void).cxx_destruct;
- (id)init;

@end
