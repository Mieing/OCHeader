@class NLETextShapeParam_OC;

@interface NLETextShape_OC : NLEStyBasicAttributes_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETextShape> { struct NLETextShape *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLETextShapeParam_OC *shapeParam;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextShape> { struct NLETextShape *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
