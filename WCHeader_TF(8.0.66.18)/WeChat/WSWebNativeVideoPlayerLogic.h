@protocol WSWebNativeVideoPlayerLogicDelegate;

@interface WSWebNativeVideoPlayerLogic : NSObject

@property (readonly, nonatomic) unsigned int nativeViewId;
@property (readonly, weak, nonatomic) id<WSWebNativeVideoPlayerLogicDelegate> delegate;

- (id)initWithViewId:(unsigned int)a0 andDelegate:(id)a1;
- (id)createPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)a0;
- (void)setMuted:(BOOL)a0;
- (void)setLoop:(BOOL)a0;
- (void)seek:(double)a0;
- (void).cxx_destruct;

@end
