@class NSMutableArray;

@interface LSGLPictureMixer : LSGLFilter

@property (nonatomic) unsigned int masterLayer;
@property (nonatomic) BOOL clearBeforeRender;
@property (nonatomic) BOOL cacheFramebufferForRedrawing;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) BOOL unableMixerWithSameFrameBuffer;
@property (retain, nonatomic) NSMutableArray *enableBlendArr;
@property (nonatomic) BOOL enableNewAlphaSupport;
@property (nonatomic) BOOL fixHighFpsMixerError;

- (id)initWithOutputSize:(struct CGSize { double x0; double x1; })a0 Context:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
