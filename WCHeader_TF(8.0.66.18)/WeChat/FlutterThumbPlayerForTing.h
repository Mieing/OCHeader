@class WCFinderPlayerViewForTing, NSString;

@interface FlutterThumbPlayerForTing : FlutterThumbPlayer <WCFinderPlayerViewForTingDelegate>

@property (retain, nonatomic) WCFinderPlayerViewForTing *finderPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayerId:(id)a0 registry:(id)a1;
- (void)setupFinderObject:(id)a0;
- (struct CGSize { double x0; double x1; })getVideoSize;
- (double)getVideoDuration;
- (void)prepare;
- (void)play;
- (void)pause;
- (void)seek:(double)a0;
- (void)setMute:(BOOL)a0;
- (void)setLoop:(BOOL)a0;
- (void)stop;
- (void)destroy;
- (struct __CVBuffer { } *)getCVPixelBuffer;
- (void)setPlaySpeed:(float)a0;
- (unsigned long long)playerState;
- (void)finderPlayerViewForTing:(id)a0 onVideoPrepareToPlay:(id)a1;
- (void)finderPlayerViewForTing:(id)a0 onVideoFrameOut:(id)a1;
- (void)finderPlayerViewForTing:(id)a0 onCurrentTimeUpdated:(double)a1 duration:(double)a2;
- (void).cxx_destruct;

@end
