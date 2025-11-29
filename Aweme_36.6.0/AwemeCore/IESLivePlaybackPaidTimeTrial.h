@class NSString, IESLivePlaybackPaidStreamVideoAdapter, NSHashTable;
@protocol IESVSVideoPlayerRouter;

@interface IESLivePlaybackPaidTimeTrial : NSObject <IESLivePaidTrial>

@property (retain, nonatomic) NSHashTable *trialEventHandlers;
@property (nonatomic) double maxTrialTime;
@property (nonatomic) double currentTrialTime;
@property (nonatomic) double remainingTime;
@property (nonatomic) double restartTrialDelta;
@property (copy, nonatomic) NSString *persistKey;
@property (retain, nonatomic) IESLivePlaybackPaidStreamVideoAdapter *videoAdapter;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) id<IESVSVideoPlayerRouter> videoPlayer;
@property (nonatomic) BOOL forbidTimeForStreamStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registeredTrialEventHandlers;
- (void)registerTrialEventHandler:(id)a0;
- (void)unregisterTrialEventHandler:(id)a0;
- (double)getRemainingValue;
- (BOOL)inTrial;
- (BOOL)inTrialFinish;
- (void)reuse;
- (void)sendEventDidStop;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (void)sendEventWillStart:(unsigned long long)a0;
- (void)sendEventDidStart:(unsigned long long)a0;
- (void)sendEventDidFinishReason:(unsigned long long)a0;
- (void)updateFreeTrialInfoWithCurrent:(double)a0;
- (BOOL)isTrialEnded:(double)a0;
- (void)tryTrialFinish;
- (void)start:(double)a0 maxValue:(double)a1 persistKey:(id)a2;
- (void)forceUpdateTrialValue:(double)a0;
- (void)sendEventValueDidChange:(double)a0;
- (void)start:(double)a0 maxValue:(double)a1 persistKey:(id)a2 reason:(unsigned long long)a3;
- (void)onVideoPlayBlock;
- (void)onVideoFinishBlock;
- (void)onVideoFrameChangeBlock:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onVideoProgressUpdateBlock:(double)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)leave;
- (id)initWithAdapter:(id)a0;
- (void)resume;
- (double)getCurrentValue;

@end
