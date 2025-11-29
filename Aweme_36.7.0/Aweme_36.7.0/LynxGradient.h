@class NSMutableArray;

@interface LynxGradient : NSObject

@property (retain, nonatomic) NSMutableArray *colors;
@property (nonatomic) double *positions;
@property (nonatomic) unsigned long long positionCount;

- (void)draw:(struct CGContext { } *)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithColors:(id)a0 stops:(id)a1;
- (void)draw:(struct CGContext { } *)a0 withPath:(struct CGPath { } *)a1;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (void)dealloc;

@end
