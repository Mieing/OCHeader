@class NSString, UIView;
@protocol AWEFeedAutoPlayFloatingButtonProtocol, AWEFeedAutoPlayManagerProtocol;

@interface AWEPadDetailTableViewPlayControlCenterAdapter : NSObject <AWEPadDetailTableViewPlayControlCenterAdapter>

@property (weak, nonatomic) UIView *bar;
@property (weak, nonatomic) UIView *detailView;
@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (retain, nonatomic) UIView<AWEFeedAutoPlayFloatingButtonProtocol> *autoPlayFloatingBtn;
@property (nonatomic) long long playTimeConfig;
@property (nonatomic) BOOL enablePureMode;
@property (nonatomic) BOOL hasAnyAction;
@property (nonatomic) long long autoPlayNoActionCount;
@property (nonatomic) double autoPlayNoActionTime;
@property (nonatomic) double floatingButtonBottomOffsetCache;
@property (nonatomic) struct CGSize { double width; double height; } lastContainerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)weakTargetClass;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (id)aAWEPadModuleAdapter;
- (void)scrollViewDidScrollEndWithActive;
- (void)viewWillBeginCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })a0;
- (id)trackCommonParams;
- (void)onPlayInteractionPureModeChangeNotification:(id)a0;
- (void)detailViewDidLoad;
- (void)detailPlayAwemeModel:(id)a0 playerPlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)storyVideoPlayTimeUpdate:(id)a0;
- (void)onLiveCellPlayTimeUpdate:(id)a0;
- (BOOL)floatingBtnShouldHidden;
- (void)breakPointDidChange;
- (void)trackAutoPlayStatus;
- (void)tryShowFloatBtnPlayTimeTipWithUpdatePlayTime:(double)a0 totalTime:(double)a1 model:(id)a2;
- (id)modelForRow:(long long)a0;
- (void)addAutoPlayFloatingButtonIfNeed;
- (void)updateBottomOffset;
- (void)updateViewHiddenForAntiAddict;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)appDidEnterBackground;
- (id)weakTarget;
- (void)viewDidDisappear;

@end
