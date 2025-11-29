@class NSMutableSet;

@interface AWEMVLeaveTracker : AWEDCFeedBaseController

@property (nonatomic) BOOL isInOutflow;
@property (retain, nonatomic) NSMutableSet *loadedImageSet;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long lastClickCellIndex;
@property (nonatomic) unsigned long long refreshCount;
@property (nonatomic) long long lastRefreshClickCount;
@property (nonatomic) long long afterRefreshClickCount;
@property (nonatomic) long long maxShownCellIndex;
@property (nonatomic) double lastLeaveChannelTime;

- (void)containerBeforeViewDidLoad;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataStartWithReason:(unsigned long long)a0;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (double)calculateJointPercentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isValidCell:(id)a0;
- (void)userDidLeaveAppWhenInMV;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
