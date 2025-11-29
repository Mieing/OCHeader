@class IESLiveRelatedLiveEntryItem, IESLiveRelatedLivePanelTabModel, HTSEventContext, NSString, IESLiveMultiCameraListView, UILabel;
@protocol IESLiveRoomService;

@interface IESLiveMultiCameraViewModel : NSObject <IESLiveMediaRoomActions, HTSLiveStreamPlayerAction, IESLiveMultiCameraAction, IESLiveMultiCameraEntryHandler>

@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *cameraEntryItem;
@property (retain, nonatomic) IESLiveRelatedLivePanelTabModel *cameraTabModel;
@property (retain, nonatomic) IESLiveMultiCameraListView *cameraListView;
@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL hasChangeCamera;
@property (nonatomic) BOOL hasTrackPortraitShow;
@property (nonatomic) BOOL hasTrackLandscapeShow;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ autoOpenTabPanelCallBack;
@property (copy, nonatomic) id /* block */ userInteractAction;
@property (copy, nonatomic) id /* block */ updateVisibleCallBack;
@property (copy, nonatomic) id /* block */ openTabPanelCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)didConnectToAnchor;
- (void)streamPlayerDidReadyToRender;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (void)notifyMainCameraTitleChanged;
- (void)trackEntryViewShow;
- (void)trackEntryViewClick;
- (void)openMultiCameraListPanelIfNeed;
- (void)multiCameraInfoDidChange:(long long)a0;
- (BOOL)enableAutoOpenMultiCameraListPanel;
- (void)tryOpenRelatedLivePanel;
- (id)panelAutoShowedKey;
- (BOOL)checkEnableShowPaidTag;
- (void)hiddenPaidTag:(BOOL)a0;
- (BOOL)enableOpenMultiCameraListPanel;
- (id)paidTagShowedKey;
- (id)cameraListViewWithType:(long long)a0;
- (void)multiCameraEntryUpdateVisible:(BOOL)a0;
- (long long)handlerPriority;
- (void)handlerResignActive;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;
- (void)mount;

@end
