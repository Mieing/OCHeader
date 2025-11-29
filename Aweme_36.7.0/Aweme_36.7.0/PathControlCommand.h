@class NSString, UIBezierPath, NSDictionary;

@interface PathControlCommand : LolaDrawCommand

@property (copy, nonatomic) NSString *subType;
@property (nonatomic) long long action;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) NSDictionary *pathData;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (void)beignPath:(id)a0 context:(struct CGContext { } *)a1;
- (void)moveTo:(id)a0 context:(struct CGContext { } *)a1;
- (void)closePath:(id)a0 context:(struct CGContext { } *)a1;
- (void)lineTo:(id)a0 context:(struct CGContext { } *)a1;
- (void)arc:(id)a0 context:(struct CGContext { } *)a1;
- (void)arcTo:(id)a0 context:(struct CGContext { } *)a1;
- (void)quadraticCurveTo:(id)a0 context:(struct CGContext { } *)a1;
- (void)bezierCurveTo:(id)a0 context:(struct CGContext { } *)a1;
- (void)rect:(id)a0 context:(struct CGContext { } *)a1;
- (void)stroke:(id)a0 context:(struct CGContext { } *)a1;
- (void)fill:(id)a0 context:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (id)typeStr;
- (void)recycle;

@end
