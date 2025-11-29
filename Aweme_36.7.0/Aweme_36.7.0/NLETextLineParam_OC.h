@class NSArray;

@interface NLETextLineParam_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETextLineParam> { struct NLETextLineParam *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL enableLine;
@property (nonatomic) long long lineType;
@property (copy, nonatomic) NSArray *lineLength;
@property (copy, nonatomic) NSArray *lineGap;
@property (nonatomic) float lineWidth;
@property (nonatomic) unsigned int lineColor;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextLineParam> { struct NLETextLineParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
