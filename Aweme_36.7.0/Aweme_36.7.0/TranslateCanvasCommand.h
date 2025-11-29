@interface TranslateCanvasCommand : LolaDrawCommand

@property (nonatomic) double dx;
@property (nonatomic) double dy;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (id)typeStr;
- (void)recycle;

@end
