@class NSArray, NLETextLineParam_OC;

@interface NLETextShapeParam_OC : NLEStyBasicAttributes_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETextShapeParam> { struct NLETextShapeParam *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) long long shapeType;
@property (nonatomic) BOOL shadow;
@property (nonatomic) unsigned int shadowColor;
@property (nonatomic) float shadowOffsetX;
@property (nonatomic) float shadowOffsetY;
@property (nonatomic) long long lineType;
@property (nonatomic) NSArray *lineLength;
@property (nonatomic) NSArray *lineGap;
@property (nonatomic) float lineWidth;
@property (retain, nonatomic) NLETextLineParam_OC *inLine;
@property (retain, nonatomic) NLETextLineParam_OC *centerLine;
@property (retain, nonatomic) NLETextLineParam_OC *outLine;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextShapeParam> { struct NLETextShapeParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
