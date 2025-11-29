@class UIView, AWESideBarEntranceBadgeInfo, NSString, AWELeftSideBarHostParams, AWELeftSideBarAmbienceManager, NSObject;
@protocol AWELeftSideBarTransitionObjectProtocol, AWELeftSideBarEntranceViewModelProtocol, AWELeftSideBarEntranceViewProtocol;

@interface AWELeftSideBarAmbienceObject : NSObject <AWELeftSideBarEntranceViewDelegate, AWELeftSideBarAmbienceObjectProtocol, AWELeftSideBarAmbienceEntranceAbilityProtocol>

@property (nonatomic) BOOL entranceHasAdd;
@property (nonatomic) BOOL entranceAdded;
@property (nonatomic) BOOL hostAppear;
@property (retain, nonatomic) NSObject<AWELeftSideBarTransitionObjectProtocol> *transitionObject;
@property (nonatomic) double transitionBlockOpenTimestamp;
@property (weak, nonatomic) AWELeftSideBarAmbienceManager *ambienceManager;
@property (retain, nonatomic) AWELeftSideBarHostParams *hostParams;
@property (weak, nonatomic) id<AWELeftSideBarEntranceViewModelProtocol> entranceViewModel;
@property (retain, nonatomic) UIView<AWELeftSideBarEntranceViewProtocol> *entranceView;
@property (retain, nonatomic) AWESideBarEntranceBadgeInfo *badgeInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasLeftSideBarEntrance;
- (long long)openType;
- (void)dispatch_sideBarHostViewWillAppear;
- (void)dispatch_sideBarHostViewDidAppear;
- (void)dispatch_sideBarHostViewDidDisappear;
- (void)dispatch_sideBarHostViewWillDisappear;
- (BOOL)awe_slidingScrollViewShouldScrollWithPan:(id)a0;
- (void)dispatch_sideBarEntranceViewHidden:(BOOL)a0;
- (void)dispatch_sideBarEntranceViewAlpha:(double)a0;
- (void)dispatch_sideBarEntranceViewAdd;
- (long long)sideBarStatus;
- (void)showLeftSideBarBussinessEntranceRedDot;
- (void)hideLeftSideBarBussinessEntranceRedDot;
- (void)showLeftSideBarBussinessEntranceRedDotWithCount:(long long)a0;
- (void)hideLeftSideBarBussinessEntranceCountRedDot;
- (BOOL)closeSideBarWithParams:(id)a0 completion:(id /* block */)a1;
- (id)getLeftSideBarOpenOperateMethodTrackName;
- (BOOL)openSideBarWithParams:(id)a0 completion:(id /* block */)a1;
- (long long)leftSideBarStatus;
- (id)getLeftSideBarViewController;
- (double)sidebarTransition_slideArea;
- (BOOL)sidebarTransition_canSlideOpen;
- (unsigned long long)sidebarTransition_destinatedType;
- (id)sidebarTransition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)initWithAmbienceManager:(id)a0 withEntranceViewModel:(id)a1 withHostParams:(id)a2;
- (void)updateWithEntranceViewModel:(id)a0 withHostParams:(id)a1;
- (BOOL)canOpenLeftSideBarWithOpenParams:(id)a0;
- (long long)leftSideBarBusinessEntranceRedDotStyle;
- (long long)currentLeftSideBarBussinessEntranceRedDotCount;
- (BOOL)hasAddLeftSideBarEntrance;
- (BOOL)canShowAmbienceEntranceBadge;
- (void)updateSideBarTabBarSnapshotIfNeed;
- (BOOL)canShowAmbienceEntranceLottie;
- (BOOL)canShowAmbienceEntrancePopView;
- (BOOL)canShowAmbienceEntranceCaption;
- (BOOL)canShowAmbienceEntranceInteractiveAnimation;
- (BOOL)canShowAmbienceEntranceAnimation;
- (void)p_handleTransitionNotification:(id)a0;
- (unsigned long long)p_openSideBarErrorTypeWithOpenPrams:(id)a0;
- (unsigned long long)p_presentSideBarErrorType;
- (BOOL)p_shouldTransitionBlockOpen;
- (void)leftSideBarEntranceViewClick:(id)a0;
- (void)leftSideBarEntranceViewTouchesBegan:(id)a0;
- (void)leftSideBarEntranceViewTapFailed:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
