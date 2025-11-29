@class AWELiveVSEpisode, NSString, UIImageView, NSDictionary, UIView, NSObject, NSNumber;
@protocol AWELiveVideoPreviewStreamPlayerProtocol, AWEShowPlayerControllerDelegate;

@interface AWEShowPlaybackPlayerController : NSObject <AWELiveVideoPreviewStreamPlayerDelegate, AWELiveVideoPreviewStreamPaidDelegate, AWEShowPlayerControllerProtocol>

@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) id<AWELiveVideoPreviewStreamPlayerProtocol> streamPlayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImgView;
@property (nonatomic) BOOL needSyncVideoProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) id player;
@property (readonly, nonatomic) NSObject *model;
@property (weak, nonatomic) id<AWEShowPlayerControllerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (nonatomic) long long scaleMode;
@property (nonatomic, getter=isMute) BOOL mute;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerController:(id)a0 playStateDidChange:(long long)a1;
- (void)playerController:(id)a0 playError:(id)a1;
- (void)onStalledStart:(id)a0 actionType:(long long)a1 reason:(unsigned long long)a2;
- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)viewStatusDidChange:(long long)a0;
- (void)freeTrialFinish;
- (void)updateCountDownForSecond:(long long)a0;
- (void)setCoverUrl:(id)a0;
- (void)playWithParams:(id)a0;
- (void)pauseWithParams:(id)a0;
- (void)stopWithParams:(id)a0;
- (void)seekToTime:(double)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)setPlaybackRate:(double)a0;
- (void)updateWithModel:(id)a0;

@end
