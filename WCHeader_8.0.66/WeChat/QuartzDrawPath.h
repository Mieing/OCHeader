@class NSArray;

@interface QuartzDrawPath : QuartzObject {
    BOOL _fill;
    BOOL _clip;
}

@property (retain, nonatomic) NSArray *path;

- (id)initWithPath:(id)a0 fill:(BOOL)a1;
- (id)initWithPath:(id)a0 clip:(BOOL)a1;
- (void)Execute:(struct CGContext { } *)a0;
- (struct CGPath { } *)newPath;
- (void)setLinearGradient:(id)a0 context:(struct CGContext { } *)a1;
- (void)setRadialGradient:(id)a0 context:(struct CGContext { } *)a1;
- (void)moveTo:(struct CGPath { } *)a0 data:(id)a1;
- (void)lineTo:(struct CGPath { } *)a0 data:(id)a1;
- (void)closePath:(struct CGPath { } *)a0 data:(id)a1;
- (void)rect:(struct CGPath { } *)a0 data:(id)a1;
- (void)quadraticCurveTo:(struct CGPath { } *)a0 data:(id)a1;
- (void)bezierCurveTo:(struct CGPath { } *)a0 data:(id)a1;
- (void)arc:(struct CGPath { } *)a0 data:(id)a1;
- (void)arcTo:(struct CGPath { } *)a0 data:(id)a1;
- (void)setHasClip:(BOOL)a0;
- (BOOL)getHasClip;
- (void).cxx_destruct;

@end
