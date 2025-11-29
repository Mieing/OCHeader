@class NLEStyCanvas_OC, NSMutableArray, NLEResourceNode_OC;

@interface NLEVideoFrameModel_OC : NLETimeSpaceNode_OC

@property (retain, nonatomic) NSMutableArray *trackArray;
@property (nonatomic) struct shared_ptr<cut::model::NLEVideoFrameModel> { struct NLEVideoFrameModel *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *snapshot;
@property (retain, nonatomic) NLEStyCanvas_OC *coverMaterial;
@property (nonatomic) long long videoFrameTime;
@property (nonatomic) float canvasRatio;

- (id)initWithCPPModel:(struct shared_ptr<cut::model::NLEVideoFrameModel> { struct NLEVideoFrameModel *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (void)removeTrack:(id)a0;
- (id)init;
- (id)tracks;
- (void)addTrack:(id)a0;

@end
