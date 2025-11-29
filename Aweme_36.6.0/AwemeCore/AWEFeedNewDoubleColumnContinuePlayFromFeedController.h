@class NSString, AWEAwemeModel;

@interface AWEFeedNewDoubleColumnContinuePlayFromFeedController : AWEDCFeedBaseController <AWEFeedNewDoubleColumnContinuePlayFromFeedControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *currentClickedAweme;
@property (nonatomic) long long currentImageIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)a0 placeholderData:(id)a1;
- (void)containerBeforeViewDidLoad;
- (void)containerBeforeViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)adjustCellPositionWithIndexPath:(id)a0;
- (BOOL)needForceRefreshForOutOfTimeFromController;
- (BOOL)shouldRearrange;
- (void)resetContinuePlayInsertAweme;
- (void)insertAwemeWithIndexPath:(id)a0;
- (id)getLeftFirstSectionIndex;
- (void)recordContinuePlayInsertAweme:(id)a0;
- (void)triggerEnterAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getEnterTargetCellFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enterTargetViewFrame;
- (double)getVisiblePercent:(id)a0;
- (void)updatePayloadIfNeedWithPayload:(id)a0 model:(id)a1 cell:(id)a2;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (id)transitionAnimator;

@end
