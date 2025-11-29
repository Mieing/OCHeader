@class IESLiveDanmakuSettingViewComponent, IESEZDanmakuLiveSceneControlComponent, NSTimer, HTSLiveToolbarItem, IESLiveDanmakuMonitor, NSString, IESLiveDanmakuDataFactoryComponent, NSMutableArray, IESLiveDanmakuMessageFilter, IESEZDanmakuEngine;
@protocol IESLiveMIFullLinkIndexMonitor;

@interface IESLiveDanmakuFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESEZDanmakuNotificationSubscriber, IESEZDanmakuComponentLiveSceneControlComponentDelegate, IESLiveRevenueInteractAction, IESEZDanmakuEngineDelegate, IESLiveMessageInteractionModuleCarnivalAction, IESLiveAutoRotateAction, IESLiveDanmakuServiceInjectorDelegate, IESLiveAnchorStableModeActions>

@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESEZDanmakuEngine *danmakuEngine;
@property (retain, nonatomic) IESLiveDanmakuDataFactoryComponent *dataFactory;
@property (retain, nonatomic) IESLiveDanmakuSettingViewComponent *settingControl;
@property (retain, nonatomic) IESEZDanmakuLiveSceneControlComponent *liveSceneControl;
@property (retain, nonatomic) HTSLiveToolbarItem *danmakuSettingItem;
@property (retain, nonatomic) IESLiveDanmakuMessageFilter *messageFilter;
@property (retain, nonatomic) IESLiveDanmakuMonitor *danmakuMonitor;
@property (retain, nonatomic) id<IESLiveMIFullLinkIndexMonitor> indexMonitor;
@property (retain, nonatomic) NSTimer *trackTimer;
@property (nonatomic) long long auditDanmakuCount;
@property (nonatomic) long long auditServerSumDuration;
@property (nonatomic) double auditClientSumDuration;
@property (nonatomic) long long unAuditDanmakuCount;
@property (nonatomic) long long unAuditServerSumDuration;
@property (nonatomic) long long unAuditClientSumDuration;
@property (retain, nonatomic) NSMutableArray *screenCastObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)showDanmakuSettingPanel;
- (void)danmakuEngine:(id)a0 businessComponentDidLoad:(id)a1;
- (void)startAnchorStableModeStrategy;
- (void)stopAnchorStableModeStrategy;
- (id)liveSceneControl:(id)a0 configForLiveSceneControlType:(unsigned long long)a1;
- (void)switchLiveSceneControlTypeTo:(unsigned long long)a0;
- (void)currentCarnivalTypeDidChangeTo:(unsigned long long)a0;
- (void)registerPrePopupPanel;
- (void)setScreenCastObservationsEnabled:(BOOL)a0;
- (void)trackDanmakuSummary;
- (void)cleanStatisticProperties;
- (void)airPlayContentViewDidChange:(id)a0;
- (BOOL)sendReviewFromMessage:(id)a0;
- (double)eventTimeFromMessage:(id)a0;
- (BOOL)enableDanmakuDisplay;
- (void)addFireDanmakuWithMessage:(id)a0;
- (void)p_switchDanmakuLiveSceneWithRevenueInteractiveScene:(unsigned long long)a0;
- (BOOL)isPKLink:(unsigned long long)a0;
- (void)monitorDanmakuShowWithData:(id)a0;
- (id)resolvedCanvasView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentPortraitDanmakuFrame;
- (void)countDanmakuDataCreateWithData:(id)a0;
- (unsigned long long)initialLiveSceneControlType;
- (void)setupDanmakuEngine:(id)a0;
- (void)addDanmakuNotificationObserverFromEngine:(id)a0;
- (void)addDanmakuNodeWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
