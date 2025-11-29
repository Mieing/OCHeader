@class NSArray;

@interface NLERichTextGradientRender_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichTextGradientRender> { struct NLERichTextGradientRender *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) long long mode;
@property (nonatomic) NSArray *color;
@property (nonatomic) float angle;
@property (nonatomic) NSArray *precent;
@property (nonatomic) NSArray *alpha;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichTextGradientRender> { struct NLERichTextGradientRender *x0; struct __shared_weak_count *x1; })a0;
- (id)init;
- (id)percent;

@end
