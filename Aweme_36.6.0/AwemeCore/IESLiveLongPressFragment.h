@class IESLiveLongPressViewModel, IESLiveLongPressStore, NSString, NSMutableArray, UILongPressGestureRecognizer;
@protocol IESLiveInternalRouter, IESLiveCustomConfig, HTSLiveLongPressActions, IESLiveLongPressOuterMenuProvider, IESLiveURLSchemaHandler, IESLiveLongPressActions;

@interface IESLiveLongPressFragment : IESLiveRoomComponent <IESLiveLongPressProvider, IESLiveRoomWatchTimeDelegate>

@property (weak, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) IESLiveLongPressStore *store;
@property (retain, nonatomic) IESLiveLongPressViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveLongPressActions> longPressActionCreator;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) id<IESLiveLongPressOuterMenuProvider> outerMenuProvider;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSMutableArray *disableReasons;
@property (retain, nonatomic) id<HTSLiveLongPressActions> userActionCreator;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)showLongPressGuide;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (void)showSettingPanel;
- (void)openNotificationPanelFromPreAnnouncement:(BOOL)a0 appointmentBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)addLongPressPanelItemWithIcon:(id)a0 title:(id)a1 action:(id /* block */)a2 identifier:(id)a3;
- (void)disableLongPressForReason:(long long)a0;
- (void)enableLongPressForReason:(long long)a0;
- (void)addLongPressPanelItemWithIcon:(id)a0 title:(id)a1 action:(id /* block */)a2 identifier:(id)a3 redDotTimes:(long long)a4;
- (void)configLongPressDuration:(double)a0;
- (void)performAudioReportAction;
- (BOOL)longPressNewPannelIsShowing;
- (void)showLongPressNotificationView:(long long)a0;
- (BOOL)isHeadSetPlugging;
- (float)getSystemVolume;
- (void)openOptimizeRecommendWithURL:(id)a0 roomModel:(id)a1 drawOrder:(id)a2;
- (void)trackerFeedbackEntranceClickWithVideoID:(id)a0 roomModel:(id)a1 requestPage:(id)a2 eventPage:(id)a3 redDotShow:(BOOL)a4;
- (void)showLongPressMenuView;
- (void)showNewLongPressView;
- (void)addOptimizeRecommendItem;
- (void)longpressed:(id)a0;
- (id)optimizeRecommendGuide;
- (id)hasOptimizeRecommendGuide;
- (void)trackerFeedbackEntranceLongPressNotice;
- (void)p_showDislikeTipIfNeed;
- (void).cxx_destruct;
- (void)dealloc;

@end
