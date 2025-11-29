@class UIColor, UIFont, UIBezierPath, LynxUI, NSMutableArray;

@interface LolaDrawContext : NSObject

@property (weak, nonatomic) LynxUI *ui;
@property (retain, nonatomic) NSMutableArray *paths;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) double textAlign;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long baseLine;
@property (nonatomic) double lineWidth;
@property (nonatomic) int blendMode;
@property (nonatomic) double shadowX;
@property (nonatomic) double shadowY;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double miterLimit;
@property (nonatomic) double globalAlpha;
@property (nonatomic) BOOL antiAlias;
@property (retain, nonatomic) UIBezierPath *lastPath;

- (void)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)invidate;
- (id)initWithTargetUI:(id)a0;
- (void)addNewPath:(id)a0;
- (void).cxx_destruct;
- (id)currentPath;

@end
