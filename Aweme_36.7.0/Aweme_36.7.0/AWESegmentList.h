@interface AWESegmentList : NSObject

@property (nonatomic) struct shared_ptr<std::list<AWESegmentListSubSegmentWrapper *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } segments;
@property (nonatomic) long long segmentLimit;
@property (nonatomic) long long totalCount;

- (void)updateAllSegmentPos;
- (void)removeElementIfNeed:(id /* block */)a0;
- (void)insertElement:(id)a0 AtIndex:(long long)a1 preferredInsertFrontSegment:(BOOL)a2;
- (id)addArrayAsSegment:(id)a0 extraInfo:(id)a1 atFront:(BOOL)a2;
- (void)updateSegmentDetailData:(id)a0 extraInfo:(id)a1 withSubSegment:(id)a2;
- (id)findThePreSegmentWithSegment:(id)a0;
- (id)findTheNextSegmentWithSegment:(id)a0;
- (long long)indexForElement:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeSegment:(id)a0;
- (id)elementAtIndex:(long long)a0;
- (id).cxx_construct;
- (id)allData;
- (void)removeElementAtIndex:(long long)a0;
- (void)clearAllData;
- (id)segmentAtIndex:(long long)a0;

@end
