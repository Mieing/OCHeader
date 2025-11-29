@interface ScaleCommand : LolaDrawCommand

@property (nonatomic) double sx;
@property (nonatomic) double sy;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (id)typeStr;
- (void)recycle;

@end
