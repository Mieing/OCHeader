@interface AWENewVideoCoverImageLayerInfo : NSObject

@property (nonatomic) BOOL intelligentCutout;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL transformLayerContent;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) double rotate;

- (void)syncStateToLayer:(id)a0;
- (id)initWithLayer:(id)a0;

@end
