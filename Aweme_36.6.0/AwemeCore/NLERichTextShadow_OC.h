@class NSArray;

@interface NLERichTextShadow_OC : NLERichTextDeco_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichTextShadow> { struct NLERichTextShadow *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) int distance;
@property (nonatomic) float angle;
@property (nonatomic) float feather;
@property (nonatomic) float diffuse;
@property (retain, nonatomic) NSArray *strokes;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichTextShadow> { struct NLERichTextShadow *x0; struct __shared_weak_count *x1; })a0;
- (void)removeStroke:(id)a0;
- (void)clearStroke;
- (id)init;
- (void)addStroke:(id)a0;

@end
