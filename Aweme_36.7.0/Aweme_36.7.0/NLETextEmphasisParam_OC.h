@class NSString, NLEResourceNode_OC;

@interface NLETextEmphasisParam_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETextEmphasisParam> { struct NLETextEmphasisParam *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) unsigned int color;
@property (nonatomic) float strokeWidth;
@property (nonatomic) float widthScale;
@property (nonatomic) float widthOffset;
@property (nonatomic) float heightScale;
@property (nonatomic) float heightOffset;
@property (copy, nonatomic) NSString *heightMode;
@property (copy, nonatomic) NSString *verticalAlignmentMode;
@property (copy, nonatomic) NSString *verticalConstraintMode;
@property (nonatomic) float verticalOffset;
@property (copy, nonatomic) NSString *spreadMode;
@property (nonatomic) BOOL adaptiveFontSizeEnabled;
@property (nonatomic) NLEResourceNode_OC *emphasisResource;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextEmphasisParam> { struct NLETextEmphasisParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
