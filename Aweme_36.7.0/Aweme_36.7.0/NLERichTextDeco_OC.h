@class NLERichTextSolidRender_OC, NLERichTextGradientRender_OC, NLERichTextTextureRender_OC;

@interface NLERichTextDeco_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichTextDeco> { struct NLERichTextDeco *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL decoEnable;
@property (nonatomic) float alpha;
@property (nonatomic) long long renderType;
@property (retain, nonatomic) NLERichTextSolidRender_OC *solid;
@property (retain, nonatomic) NLERichTextGradientRender_OC *gradient;
@property (retain, nonatomic) NLERichTextTextureRender_OC *texture;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichTextDeco> { struct NLERichTextDeco *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
