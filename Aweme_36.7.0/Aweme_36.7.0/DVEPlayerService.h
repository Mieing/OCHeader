@class NLEInterface_OC, RACSignal, NSString, NSMutableArray;
@protocol DVEEditingContextProtocol, IESServiceProvider;

@interface DVEPlayerService : NSObject <DVEPlayerServiceProtocol>

@property (retain, nonatomic) NSMutableArray *playerTimeChangeBlocks;
@property (retain, nonatomic) NSMutableArray *statuseChangeBlocks;
@property (retain, nonatomic) NSMutableArray *frameRenderBlocks;
@property (retain, nonatomic) NSMutableArray *stickerParamsBlocks;
@property (nonatomic) BOOL isPlayComplete;
@property (nonatomic) double currentPlayerTime;
@property (nonatomic) long long status;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) double needPausePlayerTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startPlayTime;
@property (nonatomic) BOOL autoResetPauseTime;
@property (nonatomic) BOOL forceToPlayFromTargetStart;
@property (readonly, nonatomic) RACSignal *playerTimeDidChangeSignal;
@property (readonly, nonatomic) RACSignal *playerCompleteSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)syncRefreshCurrentFrame:(double)a0;
- (void)resetPlayerWithViews:(id)a0;
- (int)startSeekStuckMetric:(id)a0;
- (int)endSeekStuckMetric:(id)a0;
- (double)maxTrackDuration;
- (void)setStickerParamProfileListener:(id /* block */)a0;
- (void)lockSeekVideoClip:(id)a0;
- (void)unLockSeekVideoClip;
- (id)initWithNLEInterface:(id)a0;
- (void)setPlayerTimeChangBlock:(id /* block */)a0;
- (void)setPlayerStatuseChangBlock:(id /* block */)a0;
- (void)setFrameRenderBlock:(id /* block */)a0;
- (void)removeStickerParamProfileListener:(id)a0;
- (void)playFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(double)a1 completeBlock:(id /* block */)a2;
- (void)playForSlot:(id)a0 completeBlock:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 isSmooth:(BOOL)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 isSmooth:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)resetAutoPauseTime;
- (void)initRACObserve;
- (void)setPlayerCompleteBlockForVE;
- (void)notifyTimeChangeEvent;
- (void)notifyStatuesEvent;
- (void)notifyFrameRenderEvent;
- (void)notifyStickerParmas:(id)a0 stickerIndex:(long long)a1 x:(float)a2 y:(float)a3 costTime:(float)a4;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)dealloc;

@end
