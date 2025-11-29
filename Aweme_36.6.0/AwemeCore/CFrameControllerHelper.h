@class UIScreen, NSTimer, CADisplayLink;

@interface CFrameControllerHelper : NSObject

@property (retain, nonatomic) UIScreen *screen;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) void *renderObj;
@property (retain, nonatomic) NSTimer *dropFrameTimer;
@property (nonatomic) int deviceID;
@property (nonatomic) unsigned int renderFPS;
@property (nonatomic) unsigned int uMaxFPS;
@property (nonatomic) unsigned int uMinFPS;
@property (nonatomic) BOOL bFirstCall;
@property (nonatomic) int bgCount;
@property (nonatomic) int activeCount;
@property (nonatomic) int errorPrintCount;

- (void)setMinFPS:(unsigned int)a0;
- (void)setMaxFPS:(unsigned int)a0;
- (void)stopDropFrameTimer;
- (void)renderPause;
- (void)renderResume;
- (void)dropFrameOperator:(id)a0;
- (void)requireMapRender;
- (void)startDropFrameTimerRepeats:(BOOL)a0;
- (unsigned int)getMaxFps;
- (unsigned int)getMinFps;
- (void)setRenderFPS:(unsigned int)a0 needPauseTimer:(BOOL)a1;
- (id)init;
- (void)dealloc;

@end
