@class NSMutableDictionary, LSGLPictureOutput, LSGLContext, NSData, NSString, LSGLPictureMixer;

@interface IESLiveLinkVideoMixer : NSObject <IESLiveLinkRTCInteractVideoSinkDelegate, LSGLPictureOutputDelegate>

@property (retain, nonatomic) LSGLContext *context;
@property (retain, nonatomic) NSMutableDictionary *inputNodeMap;
@property (retain, nonatomic) NSMutableDictionary *cropNodeMap;
@property (retain, nonatomic) LSGLPictureMixer *gl_mixer;
@property (retain, nonatomic) LSGLPictureOutput *gl_output;
@property (nonatomic) unsigned long long mixerType;
@property (retain, nonatomic) NSData *extendedData;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) long long rtcPixelBufferCount;
@property (nonatomic) long long afterMixPixelBufferCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didVideoBufferProcessed:(id)a0 withPixelBuffer:(struct __CVBuffer { } *)a1 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)a0 rotation:(long long)a1 extendedData:(id)a2 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 layerId:(id)a4 needRender:(BOOL)a5 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;
- (void)addLayerInfo:(struct { int x0; int x1; int x2; })a0 rect:(struct LiveLinkLayerRect { double x0; double x1; double x2; double x3; })a1 isMasterLayer:(BOOL)a2;
- (BOOL)isLayerInfoExist:(int)a0;
- (void)updateLayerInfo:(struct { int x0; int x1; int x2; })a0 rect:(struct LiveLinkLayerRect { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2;
- (void)createMixerPipeLine;
- (unsigned long long)rotationModeByConfig:(long long)a0;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)a0 rotation:(long long)a1 extendedData:(id)a2 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 layerId:(id)a4 needRender:(BOOL)a5;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)a0 rotation:(long long)a1 extendedData:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setOutputDelegate:(id)a0;

@end
