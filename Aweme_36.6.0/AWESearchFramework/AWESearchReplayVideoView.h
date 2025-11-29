@class AWELiveVSEpisode, NSString, UIImageView, AWEAwemeModel, UIView, NSDictionary;
@protocol AWELiveVideoPreviewStreamPlayerProtocol, AWESearchReplayVideoViewPlayerDelegate;

@interface AWESearchReplayVideoView : UIView <AWELiveVideoPreviewStreamPlayerDelegate, AWELiveVideoPreviewStreamPaidDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWELiveVideoPreviewStreamPlayerProtocol> playerController;
@property (nonatomic) BOOL needRelocatePlayProgress;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) double startLoadingTime;
@property (retain, nonatomic) UIView *grayContainerView;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) UIView *vsWatermarkView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) NSString *btm;
@property (weak, nonatomic) id<AWESearchReplayVideoViewPlayerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (readonly, nonatomic) double currPlaybackTime;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double startPosition;
@property (copy, nonatomic) NSDictionary *btmInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverContentMode:(long long)a0;
- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerController:(id)a0 playStateDidChange:(long long)a1;
- (void)playerController:(id)a0 playError:(id)a1;
- (void)playerControllerPlayFinished:(id)a0;
- (void)onStalledStart:(id)a0 actionType:(long long)a1 reason:(unsigned long long)a2;
- (void)onStalledEnd:(id)a0;
- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)viewStatusDidChange:(long long)a0;
- (void)didStartShowing;
- (void)updateLogExtra:(id)a0;
- (void)videoPlay;
- (void)videoPause;
- (void)addWatermark;
- (void)updateCoverImageCover;
- (void)trackReplayVideoShow;
- (void)trackReplayVideoWindowShow;
- (void)trackReplayVideoDurationV2;
- (void)trackReplayVideoDuration;
- (void)trackReplayVideoPlay;
- (void)enterReplayRoom;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)player;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
