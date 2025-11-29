@class NSString, NSNumber, NSDictionary;
@protocol AWELiveVideoPreviewStreamPlayerDelegate, AWELiveVideoPreviewStreamPaidDelegate, IESLiveVideoPreviewStreamPlayerProtocol;

@interface AWELiveVideoPreviewStreamPlayerWrapper : NSObject <IESLiveVideoPreviewStreamPlayerDelegate, IESLiveVideoPreviewStreamPaidDelegate, AWELiveVideoPreviewStreamPlayerProtocol>

@property (retain, nonatomic) id<IESLiveVideoPreviewStreamPlayerProtocol> targetPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELiveVideoPreviewStreamPlayerDelegate> delegate;
@property (weak, nonatomic) id<AWELiveVideoPreviewStreamPaidDelegate> paidDelegate;
@property (readonly, nonatomic) NSNumber *episodeID;
@property (readonly, nonatomic) NSString *playInfo;
@property (readonly, nonatomic) BOOL isLoop;
@property (readonly, nonatomic) long long playState;
@property (readonly, nonatomic) double durationTime;
@property (readonly, nonatomic) double currPlaybackTime;
@property (nonatomic) double volume;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double playbackSpeed;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerController:(id)a0 playStateDidChange:(long long)a1;
- (void)playerController:(id)a0 playError:(id)a1;
- (void)playerControllerPlayFinished:(id)a0;
- (void)onStalledStart:(id)a0 actionType:(long long)a1 reason:(unsigned long long)a2;
- (void)onStalledEnd:(id)a0;
- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)viewStatusDidChange:(long long)a0;
- (void)freeTrialFinish;
- (void)updateCountDownForSecond:(long long)a0;
- (void)changePlayerContentMode:(long long)a0;
- (id)originPlayer;
- (void)setStartTime:(double)a0 loopStartTime:(double)a1;
- (void)playFromHistoryLocation;
- (void)enableLoop:(BOOL)a0;
- (void)seekToTime:(double)a0 complete:(id /* block */)a1;
- (void)updateWithEpisode:(id)a0;
- (double)getHistoryLocation;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (void)stop;
- (id)playerView;
- (id)initWithPlayer:(id)a0;

@end
