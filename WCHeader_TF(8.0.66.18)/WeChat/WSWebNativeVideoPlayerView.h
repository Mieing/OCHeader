@class NSString, WSWebNativeVideoPlayerLogic;
@protocol WSWebNativeVideoPlayerLogicDelegate;

@interface WSWebNativeVideoPlayerView : UIView <WSWebNativeVideoPlayerViewEvents>

@property (retain, nonatomic) WSWebNativeVideoPlayerLogic *logic;
@property (nonatomic) BOOL shouldResumeWhenCallingPlayIfNeeded;
@property (readonly, nonatomic) unsigned int nativeViewId;
@property (readonly, weak, nonatomic) id<WSWebNativeVideoPlayerLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewId:(unsigned int)a0 delegate:(id)a1;
- (id)initWithViewId:(unsigned int)a0 andPluginKey:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)setFinderDataItem:(id)a0;
- (void)setVideoPath:(id)a0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)a0;
- (void)setMuted:(BOOL)a0;
- (void)setLoop:(BOOL)a0;
- (void)seek:(double)a0;
- (void)playIfNeeded;
- (void)pauseIfNeeded;
- (void).cxx_destruct;

@end
