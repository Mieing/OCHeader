@class NLETrack_OC, NSArray, AEKVideoExtraOperatorImpl, NSString, AEKElementDiffableNode;
@protocol AEKVideoData, AEKVideoExtraData;

@interface AEKVideoOperatorImpl : AEKBaseRenderEditor <AEKVideoData, AEKVideoOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrack_OC *track;
@property (readonly, nonatomic) NSArray *clipOperators;
@property (retain, nonatomic) AEKVideoExtraOperatorImpl *extraOperator;
@property (readonly, nonatomic) BOOL isMainVideo;
@property (readonly, nonatomic) BOOL isMVVideo;
@property (readonly, nonatomic) BOOL isSubVideo;
@property (readonly, nonatomic) long long clipCount;
@property (readonly, copy, nonatomic) NSArray *clips;
@property (readonly, nonatomic) id<AEKVideoExtraData> extra;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) id<AEKVideoData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)clipWithFilterBlock:(id /* block */)a0;
- (id)syncFrom:(id)a0;
- (id)addClipWithResource:(id)a0 operate:(id /* block */)a1;
- (id)clipWithId:(id)a0;
- (id)sortByTime;
- (id)addClipWithResource:(id)a0 operate:(id /* block */)a1 atIndex:(unsigned long long)a2;
- (id)replaceClipAtId:(id)a0 withResource:(id)a1 mode:(unsigned long long)a2;
- (id)diffChangesWithOrigin:(id)a0;
- (id)initWithTrack:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (id)splitVideoWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 clipId:(id)a1;
- (id)sortByPipeline;
- (id)nleResourceForResource:(id)a0;
- (id)addClipWithResource:(id)a0;
- (id)addClipWithResource:(id)a0 atIndex:(unsigned long long)a1;
- (id)slotForResource:(id)a0;
- (id)moveClipFromIdx:(unsigned long long)a0 toIdx:(unsigned long long)a1;
- (id)removeVolumeFilters;
- (void).cxx_destruct;
- (id)remove;
- (id)batch:(id /* block */)a0;
- (id)clipAtIndex:(long long)a0;
- (id)toJsonString;

@end
