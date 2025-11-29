@class DUXPopover, NSString, UIView, NSIndexPath;
@protocol AWEFeedAutoPlayFloatingButtonProtocol, AWEFeedAutoPlayManagerProtocol;

@interface AWEFeedAutoPlayFloatBtnController : AWEBaseController <AWEFeedControllerProtocol, AWEAntiAddictNoticeMessage>

@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (retain, nonatomic) UIView<AWEFeedAutoPlayFloatingButtonProtocol> *autoPlayFloatingBtn;
@property (retain, nonatomic) DUXPopover *timerPopover;
@property (nonatomic) BOOL isManualScroll;
@property (nonatomic) BOOL enablePureMode;
@property (nonatomic) BOOL timerTipBubbleShowed;
@property (nonatomic) long long playTimeConfig;
@property (retain, nonatomic) NSIndexPath *didEndDisplayingIndexPath;
@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (nonatomic) double floatingButtonBottomOffsetCache;
@property (nonatomic) struct CGSize { double width; double height; } lastContainerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)viewDidLoadAfterTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)dailyAlertDidShow;
- (void)dailyAlertDidDismiss;
- (void)onPlayInteractionPureModeChangeNotification:(id)a0;
- (void)storyVideoPlayTimeUpdate:(id)a0;
- (void)onLiveCellPlayTimeUpdate:(id)a0;
- (void)updateFloatingButtonLayoutWithCell:(id)a0;
- (void)updateBtnAlphaWithAweme:(id)a0;
- (BOOL)floatingBtnShouldHidden;
- (void)breakPointDidChange;
- (void)tryShowPlayTimeTipWithUpdatePlayTime:(double)a0 totalTime:(double)a1 model:(id)a2;
- (void)showTimerTipBubble;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;

@end
