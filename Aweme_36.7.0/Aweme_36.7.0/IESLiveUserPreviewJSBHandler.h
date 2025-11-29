@class NSString;
@protocol IESLiveContainerRouter, IESLiveInteractiveAdminActions;

@interface IESLiveUserPreviewJSBHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (retain, nonatomic) id<IESLiveInteractiveAdminActions> adminInteractiveActions;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void)closeContainer:(id)a0 animate:(BOOL)a1 completion:(id /* block */)a2;
- (id /* block */)atUserCallHandler;
- (id /* block */)reportUserCallHandler;
- (id /* block */)showProfileManageDialogCallHandler;
- (id /* block */)showManagePoiDialogCallHandler;
- (id /* block */)showPoiInfoDialogForAudienceCallHandler;
- (id /* block */)gotoLiveCallHandler;
- (id /* block */)interactAudienceInviteCallHandler;
- (id /* block */)ecDirectSplashCallHandler;
- (id /* block */)interactAudioInviteCallHandler;
- (void).cxx_destruct;

@end
