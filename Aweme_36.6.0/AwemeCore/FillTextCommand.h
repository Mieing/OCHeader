@class NSString;

@interface FillTextCommand : LolaDrawCommand

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (copy, nonatomic) NSString *text;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (double)calculateBaselineOffset:(id)a0;
- (void).cxx_destruct;
- (id)typeStr;
- (void)recycle;

@end
