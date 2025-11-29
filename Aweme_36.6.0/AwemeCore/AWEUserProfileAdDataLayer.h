@class AWESegmentList, NSMutableArray;

@interface AWEUserProfileAdDataLayer : NSObject

@property (retain, nonatomic) AWESegmentList *segmentList;
@property (retain, nonatomic) NSMutableArray *adLivePreStreamItems;
@property (weak, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) double originalTableViewHeight;

- (double)recaculateScrollContentOffsetWithScrollingVelocity:(struct CGPoint { double x0; double x1; })a0 contentOffset:(struct CGPoint { double x0; double x1; })a1 maxOffsetY:(double)a2;
- (long long)adLiveStreamShowCount;
- (long long)indexFromContentOffsetY:(double)a0;
- (double)startOffsetFromIndex:(long long)a0;
- (void)updateSegmentDetailData:(id)a0 extraInfo:(id)a1 withSubSegment:(id)a2;
- (id)findThePreSegmentWithSegment:(id)a0;
- (id)findTheNextSegmentWithSegment:(id)a0;
- (long long)indexForSlotModel:(id)a0;
- (id)array:(id)a0 withSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)addSlotModelsAsSegment:(id)a0 atFront:(BOOL)a1;
- (id)slotSegmentAtIndex:(long long)a0;
- (void)insertSlotModelInSegmentWithAweme:(id)a0 index:(long long)a1 preferredInsertFrontSegment:(BOOL)a2;
- (void)removeSlotModelInAllSegmentWithItemID:(id)a0;
- (id)slotModelForDataSouceIndex:(long long)a0;
- (BOOL)isSegmentElementsSorted:(id)a0;
- (void)updateSegment:(id)a0 elementsSortedStatus:(BOOL)a1;
- (id)addAwemeModelsAsSegment:(id)a0 atFront:(BOOL)a1;
- (id)findNearbyAdModelInDataSource:(id)a0 withVerticalScrollDirection:(long long)a1 startIndex:(long long)a2;
- (long long)findTargetAdModelIndex:(id)a0 inDataSource:(id)a1;
- (long long)findTargetAdModelIndex:(id)a0 inRawDataSource:(id)a1;
- (long long)slotIndexForAwemeModel:(id)a0;
- (void)rebuildAdLiveStreamPreCountWithDataSource:(id)a0;
- (void)rebuildAdSegmentWithInitalIndex:(long long)a0 refreshCount:(long long)a1 loadMoreCount:(long long)a2 verticalScrollDirection:(unsigned long long)a3;
- (BOOL)firstRequestOptWithInitalIndex:(long long)a0 verticalScrollDirection:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (long long)totalCount;

@end
