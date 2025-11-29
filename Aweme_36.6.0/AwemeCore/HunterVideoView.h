@class NSString, UIImageView, AWEAwemeModel, NSDictionary, UIViewController;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEPlayVideoViewControllerProtocol, HunterVideoViewDelegate, AWEAwemePlayVideoTrackProtocol;

@interface HunterVideoView : UIView <IESVideoPlayerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate, HunterElementViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isPlayCalled;
@property (copy, nonatomic) NSString *fitMode;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (weak, nonatomic) id<HunterVideoViewDelegate> delegate;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (nonatomic) BOOL enableResendPlay;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (BOOL)playWithAnimation;
- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)setCoverImage:(id)a0;
- (void)videoController:(id)a0 playerPlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:(id)a0;
- (void)videoUpdatePlayerControllerWithPlayState:(long long)a0;
- (void)updateLogExtra:(id)a0;
- (void)videoUpdatePlayerControllerWithNewPlayState:(long long)a0;
- (void)didExitLandscapeFeed;
- (void)willEnterLandscapeFeed;
- (id)playVideoViewControllerForBusiness;
- (id /* block */)willEnterFullPageWithLogExtra:(id)a0;
- (void)updateFitMode:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (void)pause;
- (void)stop;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
