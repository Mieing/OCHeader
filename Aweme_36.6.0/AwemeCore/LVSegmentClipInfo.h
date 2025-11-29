@class LVPoint, LVFlipClass;

@interface LVSegmentClipInfo : NSObject <LVCopying> {
    struct shared_ptr<CutSame::Clip> { struct Clip *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } scale;
@property (nonatomic) struct CGPoint { double x0; double x1; } translation;
@property (nonatomic) struct LVFlip { BOOL x0; BOOL x1; } flip;
@property (nonatomic) double alpha;
@property (retain, nonatomic) LVFlipClass *flipInfo;
@property (nonatomic) double rotation;
@property (retain, nonatomic) LVPoint *scaleInfo;
@property (retain, nonatomic) LVPoint *transform;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Clip> { struct Clip *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::Clip> { struct Clip *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Clip> { struct Clip *x0; struct __shared_weak_count *x1; })a0;
- (void)updateClip:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
