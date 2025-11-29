@class EAGLView_v2;

@interface VOIPVideoRender : NSObject

@property (retain, nonatomic) EAGLView_v2 *glview;

- (id)initWithView:(id)a0 Layer:(id)a1;
- (id)initWithView:(id)a0 UseNV12:(BOOL)a1 IsMirrored:(BOOL)a2 Layer:(id)a3;
- (void)setupMirror:(BOOL)a0;
- (void)dealloc;
- (void)transformBackImage;
- (void)setSharpenFilter:(int)a0 sharpenMode:(long long)a1 enable1080pSharpen:(int)a2;
- (void)transformFrontImage;
- (void)restartRender;
- (void)renderImage:(char *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 Width:(unsigned int)a2 Height:(unsigned int)a3;
- (void)renderImage2:(char *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 Width:(unsigned int)a2 Height:(unsigned int)a3;
- (void)renderImage3:(char **)a0 pixelBuffer:(struct __CVBuffer { } *)a1 Width:(unsigned int)a2 Height:(unsigned int)a3;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)randerDefaultView:(id)a0;
- (void)setDegrees:(float)a0;
- (id)getView;
- (id)snapshot;
- (void).cxx_destruct;

@end
