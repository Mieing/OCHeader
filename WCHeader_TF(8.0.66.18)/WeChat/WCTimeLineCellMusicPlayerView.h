@class MMWebImageView, WCDataItem, NSString, UIViewPropertyAnimator, UIImageView, WCImageView, MMMusicPlayerContoller, CAGradientLayer, MMMusicRhythmBackgroundView, UIVisualEffectView, UILabel;

@interface WCTimeLineCellMusicPlayerView : UIView <MMMusicPlayerContollerDelegate, IMusicPlayerExt>

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMMusicRhythmBackgroundView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (retain, nonatomic) MMWebImageView *albumCoverView;
@property (retain, nonatomic) UIImageView *blurBgImageView;
@property (retain, nonatomic) UIImageView *albumMaskImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *singerLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *whoseMVLabel;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCImageView *albumLocalImageView;
@property (retain, nonatomic) MMMusicPlayerContoller *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)resetGradientLayer;
- (void)configPlayButton;
- (void)updateWithDataItem:(id)a0 scene:(unsigned long long)a1;
- (void)onMusicPlayStatusChanged;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
