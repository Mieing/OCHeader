@class AWEMVScatterTaskScheduler, NSMutableSet, NSHashTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEMVCardTrackerController : AWEDCFeedBaseController

@property (retain, nonatomic) NSHashTable *optVisibleCellsCache;
@property (nonatomic) double lastDidScrollTime;
@property (nonatomic) double lastContentOffY;
@property (nonatomic) double yThreshold;
@property (retain, nonatomic) NSMutableArray *trackedClientShowIDs;
@property (retain, nonatomic) NSMutableSet *trackedClientShowIDSet;
@property (retain, nonatomic) NSMutableSet *trackedCoverShowIDSet;
@property (retain, nonatomic) NSMutableSet *trackedTitleShowIDSet;
@property (retain, nonatomic) NSMutableArray *trackedOnePixClientShowIDs;
@property (retain, nonatomic) NSMutableSet *trackedOnePixClientShowIDSet;
@property (nonatomic) unsigned long long loadMoreCount;
@property (nonatomic) BOOL isChannelActiveForTracker;
@property (nonatomic) unsigned long long enterChannelCount;
@property (nonatomic) unsigned long long successfulTrackClientShowCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (retain, nonatomic) AWEMVScatterTaskScheduler *uiTaskSpreadExecutor;
@property (nonatomic) BOOL cansuspendScatterTaskScheduler;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)isShowingEmptyListWithContentVC:(id)a0;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 skeletonWillDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 skeletonDidEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)listDidReloadData;
- (void)listDidPerformBatchUpdates;
- (id)aAWEPadModuleAdapter;
- (id)mvContext;
- (void)clearClientShowRecord;
- (void)clearOnePixClientShowRecord;
- (void)clearCoverTitleShowRecord;
- (void)checkVisibleCellsDisplayAreaFromSource:(unsigned long long)a0;
- (void)addVisibleCellCache:(id)a0;
- (void)removeVisibleCellCache:(id)a0;
- (id)logExtraWithCellClick:(id)a0;
- (void)trackMediumVideoClientClickWithModel:(id)a0 cardType:(unsigned long long)a1 logExtra:(id)a2;
- (void)suspendScatterTaskScheduler:(BOOL)a0;
- (double)calculateJointPercentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)hasTrackedClientShowWithItemID:(id)a0;
- (void)checkDisplayAreaForCell:(id)a0 fromSource:(unsigned long long)a1;
- (BOOL)hasTrackedOnePixClientShowWithItemID:(id)a0;
- (void)recordTrackedOnePixClientShowWithItemID:(id)a0;
- (void)trackMediumVideoOnePixClientShowWithModel:(id)a0 cardType:(unsigned long long)a1 index:(long long)a2 fromSource:(unsigned long long)a3;
- (BOOL)hasTrackedTitleShowWithItemID:(id)a0;
- (void)checkDisplayTitleForCell:(id)a0 fromSource:(unsigned long long)a1;
- (BOOL)hasTrackedCoverShowWithItemID:(id)a0;
- (void)checkDisplayCoverForCell:(id)a0 fromSource:(unsigned long long)a1;
- (void)trackMediumVideoTitleShowWithCell:(id)a0;
- (void)recordTrackedTitleShowWithItemID:(id)a0;
- (void)trackMediumVideoCoverShowWithCell:(id)a0;
- (void)recordTrackedCoverShowWithItemID:(id)a0;
- (void)willShowHalfInVisibleRangeWithIndex:(long long)a0 model:(id)a1 fromSource:(unsigned long long)a2;
- (void)trackMediumVideoClientShowWithModel:(id)a0 cardType:(unsigned long long)a1 index:(long long)a2 fromSource:(unsigned long long)a3;
- (void)trackMVTitleShowWithModel:(id)a0 cardType:(unsigned long long)a1 index:(long long)a2 fromSource:(unsigned long long)a3;
- (void)trackCardAnchorShowWithModel:(id)a0;
- (void)trackMediumVideoUGShowWithModel:(id)a0;
- (void)recordTrackedClientShowWithItemID:(id)a0;
- (id)mediumVideoCoverTitleCommonParamsWithModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)containerViewDidLoad;

@end
