@class UIButton, NSString, AWEChallengeNakedEye3DModel, UIImageView, UIView, BDImageView;
@protocol IESVideoPlayerProtocol;

@interface AWEChallengeDetailNakedEye3DView : UIView <IESVideoPlayerDelegate, AWEChallengeDetailNakedEye3DView>

@property (retain, nonatomic) AWEChallengeNakedEye3DModel *model;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> backgroundVideoPlayer;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) BDImageView *foregroundAnimator;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) UIButton *replayButton;
@property (nonatomic) BOOL appDidResignActive;
@property (nonatomic) BOOL isAnimatorDownloaded;
@property (nonatomic) BOOL isVideoReadyToPlay;
@property (nonatomic) BOOL isPlayCalledOnce;
@property (nonatomic) BOOL isCurrentVCDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *tagID;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)playWhenAppear;
- (void)stopWhenDisappear;
- (void)playIfNotPlayed;
- (void)contentTapped:(id)a0;
- (void)replayButtonClicked;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
