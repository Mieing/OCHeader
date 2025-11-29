@class NSString, OpenVoiceOpenglesContext, UIView;
@protocol NSObject;

@interface EAGLOpenVoiceView : UIView <OpenVoiceOpenglesContextDelegate>

@property (retain, nonatomic) id<NSObject> targetor;
@property (retain, nonatomic) UIView *m_defaultView;
@property (retain, nonatomic) OpenVoiceOpenglesContext *m_openglesContext;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL m_acceptNV12;
@property (nonatomic) BOOL m_mirrored;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (BOOL)checkTouchPoint:(struct CGPoint { double x0; double x1; })a0 IfInView:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)renderView;
- (void)updateViewFrameWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)whenDidActive;
- (void)whenEnterBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithView:(id)a0;
- (id)initWithView:(id)a0 AcceptNV12:(BOOL)a1;
- (id)initWithView:(id)a0 AcceptNV12:(BOOL)a1 IsMirrored:(BOOL)a2;
- (void)setupELGS;
- (void)setupELGS:(BOOL)a0 IsMirrored:(BOOL)a1;
- (void)restartRender;
- (void)stopRender;
- (void)addSingleTapTarget:(id)a0 action:(SEL)a1;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 fitView:(BOOL)a3;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 objectFit:(int)a3;
- (void)renderImage2:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)renderImage3:(char **)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)dealloc;
- (void)applyRotation:(float)a0;
- (void)setDegrees:(float)a0;
- (void)resetMirror:(BOOL)a0;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)randerDefaultView:(id)a0;
- (BOOL)isUnmatch;
- (void).cxx_destruct;

@end
