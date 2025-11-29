@interface NLESegmentPreMVP_OC : NLESegment_OC

@property (nonatomic) BOOL aek_hasEdit;
@property (nonatomic) struct shared_ptr<cut::model::NLESegmentPreMvp> { struct NLESegmentPreMvp *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) double posXInCanvas;
@property (nonatomic) double posYInCanvas;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double widthHeightRatio;

@end
