@class NSHashTable, NSString, UIView, IESECWinContext, UITapGestureRecognizer, UIImageView, UIPanGestureRecognizer, FBKVOController, IESECServiceProxy, UILabel;
@protocol IESECWinLiveService, IESECWinOpportunityService, IESECWinTabService, IESECWinSplitSlidePlayerProtocol, IESECWinTabViewControllerManager, IESECWinMainScrollService;

@interface IESECWinSplitService : NSObject <UIGestureRecognizerDelegate, IESECWinOpportunityProtocol, IESECWinSplitService> {
    BOOL _isFirstViewWillAppear;
    BOOL _isFirstViewDidAppear;
    UIPanGestureRecognizer *_pan;
    UITapGestureRecognizer *_tap;
    struct CGPoint { double x; double y; } _panStartPoint;
    BOOL _renewPlay;
    id<IESECWinSplitSlidePlayerProtocol> _videoPlayer;
    unsigned long long _lastScreenState;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (nonatomic) double offsetY;
@property (retain, nonatomic) NSHashTable *moveHashTable;
@property (retain, nonatomic) NSHashTable *opaqueHashTable;
@property (retain, nonatomic) NSHashTable *opaqueReverseHashTable;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *tabManager;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIImageView *guideIconView;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *ignoreView;
@property (nonatomic) unsigned long long screenState;
@property (weak, nonatomic) UIView *mainDragView;
@property (readonly, nonatomic) double scrollRatio;
@property (readonly, nonatomic) double splitScreenModeScrollModuleMinY;
@property (readonly, nonatomic) double fullScreenModeScrollModuleMinY;
@property (readonly, nonatomic) double scrollDistance;

- (void)updateScreenState;
- (void)reportTracker;
- (void)registerMoveView:(id)a0;
- (void)registerOpaqueView:(id)a0;
- (void)registerReverseOpaqueView:(id)a0;
- (void)scrollToFull;
- (BOOL)isHideInCurrentScreenState:(id)a0;
- (void)registerOpaqueObject:(id)a0;
- (void)registerReverseOpaqueObject:(id)a0;
- (void)registerMoveObject:(id)a0;
- (void)setFullScreenModeScrollModuleMinY:(double)a0;
- (void)updateStickyOfObjects;
- (void)shouldRenewPlay;
- (void)customDismiss:(id)a0;
- (BOOL)tapActionHitDismiss:(id)a0;
- (BOOL)shouldPanGestureBegin;
- (void)updateSubviewFrame:(double)a0;
- (void)updateSubviewAlpha:(double)a0;
- (void)changeFrameToY:(double)a0;
- (void)setupSlideViewState;
- (void)setSplitScreenModeScrollMuduleMinY:(double)a0;
- (void)addPanGesture;
- (void).cxx_destruct;
- (void)startWork;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)dismissAction;
- (void)viewWillDisappear:(BOOL)a0;
- (void)panGestureHandler:(id)a0;

@end
