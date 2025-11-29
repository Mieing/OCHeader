@interface TransformCommand : LolaDrawCommand

@property (nonatomic) double a;
@property (nonatomic) double b;
@property (nonatomic) double c;
@property (nonatomic) double d;
@property (nonatomic) double tx;
@property (nonatomic) double ty;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (id)typeStr;
- (void)recycle;

@end
