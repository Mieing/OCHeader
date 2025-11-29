@class UIStackView, AWEMusicPlayerRightContainer, AWEMusicPlayerProgressView, UIView, AWEMusicLunaGuideTip, AWEMusicLunaGuideBubble, AWEGradientView, BDImageView, UIButton, NSString, AWEMusicCycleLoopLabel, UILabel;
@protocol AWEMusicPlayerControlViewDelegate;

@interface AWEMusicPlayerControlView : UIView <AWEMusicPlayerProgressViewDelegate, AWEMusicPlayerRightContainerDelegate>

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEMusicPlayerProgressView *playerProgressView;
@property (retain, nonatomic) AWEMusicPlayerRightContainer *rightContainer;
@property (retain, nonatomic) AWEMusicCycleLoopLabel *songName;
@property (retain, nonatomic) UILabel *songAuthor;
@property (retain, nonatomic) UILabel *videoAuthor;
@property (retain, nonatomic) UIStackView *infoStack;
@property (nonatomic) double safeAreaBottom;
@property (nonatomic) BOOL isSmall;
@property (retain, nonatomic) AWEMusicLunaGuideBubble *lunaGuideBubble;
@property (nonatomic) BOOL isOnlyAudio;
@property (nonatomic) BOOL isShowBgGradient;
@property (weak, nonatomic) id<AWEMusicPlayerControlViewDelegate> delegate;
@property (retain, nonatomic) UIView *sceneViewContainer;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (nonatomic) int element;
@property (readonly, nonatomic) UIButton *collectionButton;
@property (readonly, nonatomic) UIView *songNameLabel;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long collectionType;
@property (retain, nonatomic) AWEMusicLunaGuideTip *lunaGuideTip;
@property (nonatomic) BOOL canShowLunaTips;
@property (nonatomic) BOOL isLunaUgGuidePopShowing;
@property (readonly, nonatomic) double cacheProgress;
@property (readonly, nonatomic) double playProgress;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playProgressGestureBeginDrag;
- (void)playProgressGestureDidEnd:(double)a0 currentTime:(double)a1 completion:(id /* block */)a2;
- (void)playProgressGestureDidChanged:(double)a0 currentTime:(double)a1;
- (void)updateCacheProgressTime:(double)a0 animation:(BOOL)a1;
- (void)updatePlayProgressTime:(double)a0 animation:(BOOL)a1;
- (void)setupCoverLine:(id)a0;
- (void)updateSongName:(id)a0 songAuthor:(id)a1 videoAuthor:(id)a2;
- (void)showLunaBubble:(BOOL)a0 animation:(BOOL)a1;
- (void)p_updateInfoStack;
- (void)p_changeLeftViewAlpha:(double)a0;
- (void)rightContainerDidTapCollectionBtnWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)rightContainerDidTapShareBtn;
- (void)rightContainerDidTapMoreBtn;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)reset;
- (void)stopLoading;
- (void)setup;

@end
