@class NSString, NLEResourceNode_OC;

@interface NLEStyStickerAnimation_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEStyStickerAnim> { struct NLEStyStickerAnim *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL loop;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } inDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } outDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } loopDuration;
@property (retain, nonatomic) NLEResourceNode_OC *inAnimation;
@property (retain, nonatomic) NLEResourceNode_OC *outAnimation;
@property (copy, nonatomic) NSString *scriptType;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyStickerAnim> { struct NLEStyStickerAnim *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
