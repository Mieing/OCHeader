@class EAGLOpenVoiceView;

@interface OpenVoiceVideoRender : NSObject

@property (retain, nonatomic) EAGLOpenVoiceView *glview;

- (id)initWithView:(id)a0 Layer:(id)a1;
- (id)initWithView:(id)a0 UseNV12:(BOOL)a1 IsMirrored:(BOOL)a2 Layer:(id)a3;
- (void)dealloc;
- (void)addSingleTapTarget:(id)a0 action:(SEL)a1;
- (void)transformBackImage;
- (void)transformFrontImage;
- (void)restartRender;
- (void)stopRender;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 fitView:(BOOL)a3;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 objectFit:(int)a3;
- (void)renderImage2:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)renderImage3:(char **)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)randerDefaultView:(id)a0;
- (void)setDegrees:(float)a0;
- (id)getGLView;
- (id)getView;
- (BOOL)isUnmatch;
- (void).cxx_destruct;

@end
