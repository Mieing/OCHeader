@class NSString, IESLiveInteractXPlayModel, UIImageView, CreateInfoResponse_ConfigItem, UIView, IESLiveGuideToolBarItem, IESLiveVirtualLiveGuideApi;
@protocol IESLiveInteractXPlayService, IESLiveWebPPlayer, IESLivePiperProtocol;

@interface IESLiveVirtualLiveGuideFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideOpenLiveAdditionalEvent, IESLiveVirtualLiveGuideRouter, IESLiveInteractXPlayDelegate, IESLiveBigPartyOpenGuideAction, IESLiveCameraZoomAction>

@property (weak, nonatomic) id<IESLiveInteractXPlayService> xPlayService;
@property (retain, nonatomic) IESLiveInteractXPlayModel *gameModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraPreviewFrame;
@property (retain, nonatomic) UIView *gamePlayerView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *xPlayLoadingView;
@property (retain, nonatomic) IESLiveGuideToolBarItem *toolbarItem;
@property (retain, nonatomic) CreateInfoResponse_ConfigItem *replacedConfigItem;
@property (retain, nonatomic) IESLiveVirtualLiveGuideApi *virtualLiveApi;
@property (nonatomic) struct { struct CGSize { double width; double height; } outputSize; unsigned long long fps; } originalCameraConfig;
@property (nonatomic) BOOL isAvatarReady;
@property (nonatomic) BOOL isTrialAvatar;
@property (weak, nonatomic) id<IESLivePiperProtocol> lynxPiper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)didReceiveRTCCustomMessageWithString:(id)a0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)appendOpenLiveRequestParams:(id)a0 completion:(id /* block */)a1;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)appendLiveActionTrackParams:(id)a0 completion:(id /* block */)a1;
- (void)cameraPositionChanged;
- (BOOL)isVirtualLiveOpen;
- (id)virtualLiveStateInfo;
- (void)openVirtualLiveGuidePageWithSource:(id)a0;
- (void)startVirtualGameWithExtra:(id)a0;
- (void)closeVirtualGameWithExtra:(id)a0;
- (id)virtualLivePreview;
- (id)trackCommonInfo:(BOOL)a0;
- (id)checkOpenLivePrecondition;
- (void)bigPartyOpenGuideDidChangeAutoOpen:(BOOL)a0;
- (void)handleVirtualLiveBlockOtherItems;
- (void)showBlockOpenLiveAlert;
- (BOOL)shouldShowVirtualAvatarBackCameraToast;
- (void)recordVirtualAvatarBackCameraToast;
- (void)setupXPlayLoadingView;
- (void)setupXPlayWithInfo:(id)a0;
- (void)setupVirtualLiveToolbarItem;
- (void)removeXPlayLoadingView;
- (void)unbindCamera;
- (void)removeGamePlayerView;
- (void)removeVirtualLiveToolbarItem;
- (void)notifyLynxWithInfo:(id)a0;
- (void)setupGamePlayerView;
- (void)didReceiveInitRTCCustomMsgWithInfo:(id)a0;
- (void)trackUEOperationResultWithMessageID:(int)a0 success:(BOOL)a1;
- (void)updateUEInfoWithMessageInfo:(id)a0 notifyLynx:(BOOL)a1;
- (void)bindCameraAndPublish;
- (void)trackOpenLiveAlertWithIsClick:(BOOL)a0 elementName:(id)a1;
- (void)startStatusDidChange:(unsigned long long)a0 errorCode:(long long)a1;
- (void)playStatusDidUpdated:(long long)a0 errorCode:(long long)a1;
- (void)cloudPlayerPlayStatusDidUpdated:(unsigned long long)a0 cloudPlayer:(id)a1 errorCode:(long long)a2;
- (void)cameraOnCaptureRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
