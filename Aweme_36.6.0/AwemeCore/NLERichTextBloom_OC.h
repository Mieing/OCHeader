@class NLEResourceNode_OC;

@interface NLERichTextBloom_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichTextBloom> { struct NLERichTextBloom *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL bloomEnable;
@property (nonatomic) BOOL colorCustomized;
@property (nonatomic) unsigned int color;
@property (nonatomic) float strength;
@property (nonatomic) float range;
@property (nonatomic) float dirX;
@property (nonatomic) float dirY;
@property (nonatomic) float blurDegree;
@property (retain, nonatomic) NLEResourceNode_OC *resourcePath;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichTextBloom> { struct NLERichTextBloom *x0; struct __shared_weak_count *x1; })a0;
- (void)setdirX:(float)a0;
- (void).cxx_destruct;
- (id)init;

@end
