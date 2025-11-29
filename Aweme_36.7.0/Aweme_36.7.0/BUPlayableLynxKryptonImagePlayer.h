@class NSThread, BDAnimatedImagePlayer, UIImage, NSDictionary, NSString;
@protocol KryptonVideoPlayerDelegate;

@interface BUPlayableLynxKryptonImagePlayer : NSObject <BDAnimatedImagePlayerDelegate, KryptonVideoPlayer>

@property (retain, nonatomic) BDAnimatedImagePlayer *imagePlayer;
@property (retain, nonatomic) id<KryptonVideoPlayerDelegate> playerDelegate;
@property (retain, nonatomic) NSThread *lynxJSThread;
@property (nonatomic) BOOL destroyed;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
@property (nonatomic) BOOL loop;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)imagePlayerStartPlay:(id)a0;
- (void)imagePlayerDidStopPlay:(id)a0;
- (void)imagePlayerDidReachEnd:(id)a0;
- (void)imagePlayerDelayPlay:(id)a0 index:(unsigned long long)a1 animationDelayType:(unsigned long long)a2 animationDelayState:(unsigned long long)a3;
- (void)imagePlayerDidReachAllLoopEnd:(id)a0;
- (void)imagePlayer:(id)a0 didUpdateImage:(id)a1 index:(unsigned long long)a2;
- (int)getVideoWidth;
- (int)getVideoHeight;
- (long long)getVideoRotation;
- (void)_notifyPlayerState:(id)a0;
- (void)notifyPlayerState:(long long)a0;
- (BOOL)getLooping;
- (void)setCurrentTime:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)getDuration;
- (id)init;
- (void)setVolume:(double)a0;
- (void)dispose;
- (void)setSource:(id)a0;
- (void)resume;
- (void)setLooping:(BOOL)a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (double)getCurrentTime;
- (void)_loadWithURL:(id)a0;

@end
