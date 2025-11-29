@class NLEResourceNode_OC;

@interface NLERichTextTextureRender_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichTextTextureRender> { struct NLERichTextTextureRender *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float scale;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) float angle;
@property (nonatomic) float alpha;
@property (nonatomic) long long blend;
@property (nonatomic) float range;
@property (retain, nonatomic) NLEResourceNode_OC *texturePath;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichTextTextureRender> { struct NLERichTextTextureRender *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
