@class NLEResourceNode_OC;

@interface NLEStyCanvas_OC : NLENode_OC

@property (nonatomic) BOOL isSceneCanvasDMT;
@property (nonatomic) struct shared_ptr<cut::model::NLEStyCanvas> { struct NLEStyCanvas *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) unsigned int borderWidth;
@property (nonatomic) unsigned long long canvasType;
@property (nonatomic) unsigned int color;
@property (nonatomic) float blurRadius;
@property (nonatomic) unsigned int startColor;
@property (nonatomic) unsigned int endColor;
@property (nonatomic) BOOL antialiasing;
@property (retain, nonatomic) NLEResourceNode_OC *imageSource;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyCanvas> { struct NLEStyCanvas *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
