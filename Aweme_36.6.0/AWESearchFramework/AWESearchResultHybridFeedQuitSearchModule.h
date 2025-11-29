@class UIImageView, AWESearchHomeSideCurveTipView, UILabel, AWESearchResultHybridViewController;

@interface AWESearchResultHybridFeedQuitSearchModule : AWESearchResultHybridBaseContainerModules

@property (weak, nonatomic) AWESearchResultHybridViewController *resultViewController;
@property (retain, nonatomic) UILabel *overScrollTopLabel;
@property (retain, nonatomic) UILabel *overScrollBottomLabel;
@property (retain, nonatomic) UIImageView *topArrowImageView;
@property (retain, nonatomic) UIImageView *bottomArrowImageView;
@property (retain, nonatomic) AWESearchHomeSideCurveTipView *curveTipView;
@property (nonatomic) BOOL scrollCalculated;
@property (nonatomic) BOOL hasDragged;
@property (nonatomic) BOOL fixBottomBar;
@property (nonatomic) BOOL isAIDataFinished;

+ (id)moduleName;

- (void)setupUI:(id)a0;
- (void)setupConstraint;
- (void)searchHybird_aiRequestFailureWithConversationID:(id)a0 searchID:(id)a1;
- (void)customFeedDidScroll:(id)a0;
- (void)aiStartRequestQuery:(id)a0;
- (void)aiReceiveDataFinishWithSearchID:(id)a0;
- (void)customOnBackButtonClicked;
- (void)dispatchRouterModel:(id)a0;
- (void)customRightPan:(id)a0;
- (double)calculateOverScrollAmount:(double)a0 topInset:(double)a1 bottomInset:(double)a2 maxContentOffsetY:(double)a3 isOverScrollingTop:(BOOL)a4 isOverScrollingBottom:(BOOL)a5;
- (void)handleDraggingState:(double)a0 isOverScrollingTop:(BOOL)a1 isOverScrollingBottom:(BOOL)a2 factor:(long long)a3;
- (void)handleNonDraggingState:(double)a0 factor:(long long)a1;
- (double)calculateOverScrollAlpha:(double)a0;
- (void)updateOverScrollUIWithAlpha:(double)a0 isOverScrollingTop:(BOOL)a1 isOverScrollingBottom:(BOOL)a2;
- (void)hideAllOverScrollUI;
- (void)handleScrollEndWithOverScroll:(double)a0 factor:(long long)a1;
- (double)p_getScrollThreshold;
- (void)quitSearch:(id)a0 offset:(double)a1 animated:(BOOL)a2;
- (void)handlePanGestureBegan:(id)a0;
- (void)handlePanGestureChanged:(id)a0;
- (void)handlePanGestureEnded:(id)a0;
- (BOOL)isValidRightSwipeGesture:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)enableFeedSearchRightPanScrollToPreviousVideo;
- (id)overScrollLabelColor;
- (id)p_createOverScrollLabelWithText:(id)a0;
- (id)p_createArrowImageViewWithRotation:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themeDidChange;
- (void)setupNotifications;

@end
