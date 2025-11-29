@class NSArray, NSString, UIView, AWEMVSelectedBillboardEntranceHolderSkeletonView, AWEMVSelectedBillboardEntranceHolderView;

@interface AWEMVSelectedBillboardEntranceController : AWEDCFeedBaseController <AWEMVSelectedBillboardEntranceControllerProtocol>

@property (retain, nonatomic) AWEMVSelectedBillboardEntranceHolderView *entranceView;
@property (retain, nonatomic) UIView *overlapCoverView;
@property (nonatomic) BOOL shouldAdjustEntranceView;
@property (retain, nonatomic) AWEMVSelectedBillboardEntranceHolderSkeletonView *skeletonView;
@property (retain, nonatomic) NSArray *entranceModels;
@property (nonatomic) BOOL shouldDeferAnimationForCancelDrag;
@property (nonatomic) BOOL entranceViewShownHasBeenRecord;
@property (nonatomic) double lastDidScrollTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)isShowingEmptyListWithContentVC:(id)a0;
+ (double)entranceViewHeight;
+ (id)generatePlaceHolderModel;
+ (struct CGPoint { double x0; double x1; })collectionViewReloadFinishedOriginalOffsetBlockWithContentVC:(id)a0;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)dragWithProgress:(double)a0;
- (void)dragCancellation;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)listDidReloadData;
- (void)listDidPerformBatchUpdates;
- (id)aAWEPadModuleAdapter;
- (double)calculateJointPercentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)hideSelectedBillboardEntranceWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 alpha:(double)a1;
- (void)checkDisplayArea;
- (void)willShowHalfInVisibleRange;
- (void)checkVisibleCellsDisplayArea;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themeDidChange;
- (void)containerViewDidLoad;

@end
