@class NSString;

@interface StateCommand : LolaDrawCommand

@property (copy, nonatomic) NSString *state;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (id)typeStr;
- (void)recycle;

@end
