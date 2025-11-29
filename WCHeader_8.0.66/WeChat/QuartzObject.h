@class NSArray, NSString;
@protocol IMMQuartz2DContextDelegate;

@interface QuartzObject : NSObject {
    NSArray *_data;
    NSString *_action;
}

@property (weak, nonatomic) id<IMMQuartz2DContextDelegate> contextDelegate;

+ (void)reset;
+ (id)getFontWithSize:(unsigned int)a0 family:(id)a1 weight:(id)a2 style:(id)a3;

- (id)initWithAction:(id)a0 data:(id)a1;
- (void)Execute:(struct CGContext { } *)a0;
- (void)setShadow:(struct CGContext { } *)a0;
- (void)clearRect:(struct CGContext { } *)a0;
- (void)scale:(struct CGContext { } *)a0;
- (void)rotate:(struct CGContext { } *)a0;
- (void)translate:(struct CGContext { } *)a0;
- (void)transform:(struct CGContext { } *)a0;
- (void)setTransform:(struct CGContext { } *)a0;
- (void)setFontSize:(struct CGContext { } *)a0;
- (void)setFontStyle:(struct CGContext { } *)a0;
- (void)setFontWeight:(struct CGContext { } *)a0;
- (void)setFontFamily:(struct CGContext { } *)a0;
- (id)getFontWithContext;
- (void)setTextAlign:(struct CGContext { } *)a0;
- (void)setTextBaseline:(struct CGContext { } *)a0;
- (void)fillText:(struct CGContext { } *)a0;
- (void)strokeText:(struct CGContext { } *)a0;
- (void)drawText:(struct CGContext { } *)a0 isStroke:(BOOL)a1;
- (void)drawImage:(struct CGContext { } *)a0;
- (void)drawImageData:(struct CGContext { } *)a0;
- (void)setGlobalAlpha:(struct CGContext { } *)a0;
- (void)save:(struct CGContext { } *)a0;
- (void)restore:(struct CGContext { } *)a0;
- (void)setFillStyle:(struct CGContext { } *)a0;
- (void)setStrokeStyle:(struct CGContext { } *)a0;
- (void)setPatternStyle:(struct CGContext { } *)a0 data:(id)a1 isFill:(BOOL)a2;
- (struct CGPattern { } *)newPatternWithData:(id)a0;
- (void)setLineCap:(struct CGContext { } *)a0;
- (void)setLineJoin:(struct CGContext { } *)a0;
- (void)setLineWidth:(struct CGContext { } *)a0;
- (void)setMiterLimit:(struct CGContext { } *)a0;
- (void)setLineDash:(struct CGContext { } *)a0;
- (void)setGlobalCompositeOperation:(struct CGContext { } *)a0;
- (void)addTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTransform;
- (void).cxx_destruct;

@end
