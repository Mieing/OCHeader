@class NSString, NSDictionary, EffectCanvasHandler, HTSGLContext;

@interface IESEffectVideoAnimatedRenderer : NSObject

@property (nonatomic) void *engineHandler;
@property (retain, nonatomic) EffectCanvasHandler *canvasObject;
@property (retain, nonatomic) NSDictionary *canvasHandlerMap;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) HTSGLContext *context;

- (void)checkEffectError:(int)a0 msg:(id)a1;
- (void)updateCanvasAnimation:(id)a0;
- (void)removeAllCanvasKeyFramesWithTrackID:(id)a0;
- (id)getCanvasKeyFrameInfo:(unsigned long long)a0 withTrackID:(id)a1;
- (void)updateVideoAnimatedParams:(id)a0;
- (void)activeCanvasHandlerForKey:(id)a0 animation:(id)a1;
- (void)destoryCanvasHandlerForKey:(id)a0;
- (void)setkeyFrameInfoWrapper:(id)a0;
- (void)removeAllCanvasKeyFrames;
- (id)getCanvasKeyFrameInfo:(unsigned long long)a0;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })a0 identifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
