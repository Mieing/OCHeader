@class NSString;

@interface NLETimeSpaceNode_OC : NLENode_OC {
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } _processors;
}

@property (copy, nonatomic) NSString *originStartTimeString;
@property (copy, nonatomic) NSString *originEndTimeString;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originStartTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originEndTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } acc_startTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } acc_endTime;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } dve_targetTimeRange;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } dve_endTime;
@property (nonatomic) struct shared_ptr<cut::model::NLETimeSpaceNode> { struct NLETimeSpaceNode *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) long long layer;
@property (nonatomic) float speed;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })matchParentTime;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })wrapContentTime;

- (float)transformX;
- (void)setTransformX:(float)a0;
- (float)transformY;
- (void)setTransformY:(float)a0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETimeSpaceNode> { struct NLETimeSpaceNode *x0; struct __shared_weak_count *x1; })a0;
- (int)transformZ;
- (void)setTransformZ:(int)a0;
- (long long)Mirror_X;
- (void)setMirror_X:(long long)a0;
- (long long)Mirror_Y;
- (void)setMirror_Y:(long long)a0;
- (BOOL)hadEndTime;
- (void)setRelativeWidth:(float)a0;
- (float)RelativeWidth;
- (void)setRelativeHeight:(float)a0;
- (float)RelativeHeight;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getMeasuredEndTime;
- (long long)getLayer;
- (id)collectProcessNodes;
- (void)setProcessors:(id)a0;
- (void)setOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasOriginTime;
- (void).cxx_destruct;
- (void)setEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)scale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })endTime;
- (void)setRotation:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getDuration;
- (id)init;
- (void)setScale:(float)a0;
- (id).cxx_construct;
- (long long)mirror;
- (float)rotation;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (void)setMirror:(long long)a0;
- (id)processors;

@end
