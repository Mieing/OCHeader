@class NSString, ToolbarMultiStreamPayLoad_MultiStreamCameraInfo, IESLiveGCDTimer, UIView, ToolbarMultiStreamPayLoad;
@protocol IESLiveBubbleGuide;

@interface IESLiveMultiCameraFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler, IESLiveSocialInteractPreLoadExAction, HTSLiveStreamPlayerAction>

@property (retain, nonatomic) ToolbarMultiStreamPayLoad *multiStreamPayLoad;
@property (retain, nonatomic) ToolbarMultiStreamPayLoad_MultiStreamCameraInfo *subCameraInfo;
@property (retain, nonatomic) IESLiveGCDTimer *startBubbleGuide;
@property (nonatomic) BOOL subCameraIsClosed;
@property (nonatomic) BOOL isLinking;
@property (nonatomic) BOOL cameraIsChanged;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *BubbleGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)showToast;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentRefresh;
- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)willStopPlayerWithLayout:(id)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)p_invalidateTimer;
- (void)streamPlayerDidReadyToRender;
- (BOOL)shouldShowEntrance;
- (void)showMultiCameraToolbar;
- (void)changeCamera;
- (void)showToolbarBubble;
- (id)vsCameraInfoByCamera:(id)a0;
- (id)cameraInfoByCameraId:(long long)a0;
- (void).cxx_destruct;

@end
