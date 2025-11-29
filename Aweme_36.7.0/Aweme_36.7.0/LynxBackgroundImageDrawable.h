@class NSURL, UIImage;

@interface LynxBackgroundImageDrawable : LynxBackgroundDrawable

@property (nonatomic) unsigned long long currentFrame;
@property (nonatomic) unsigned long long *stepArray;
@property (nonatomic) unsigned long long currentStepIndex;
@property (retain, nonatomic) NSURL *url;
@property (retain) UIImage *image;

- (id)illegalUrlHandler:(id)a0;
- (double)getImageWidth;
- (double)getImageHeight;
- (void)onDraw:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawInContext:(struct CGContext { } *)a0 borderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 paddingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)generateStepArrayWithFPS:(unsigned long long)a0 andTargetFPS:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)isReady;
- (id)initWithString:(id)a0;
- (unsigned long long)type;
- (void)dealloc;
- (unsigned long long)nextStep;

@end
