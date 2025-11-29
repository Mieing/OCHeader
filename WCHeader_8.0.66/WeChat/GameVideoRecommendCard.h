@class UIView, WCPlayerView, GameHaowanMediaWrap, MMAssetForGameHaowan, UILabel, MMWebImageView, UIButton;
@protocol GameVideoRecommendCardDelegate;

@interface GameVideoRecommendCard : UIView

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *publishBtn;
@property (retain, nonatomic) UIView *tagViewContainer;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) GameHaowanMediaWrap *mediaWrap;
@property (retain, nonatomic) MMAssetForGameHaowan *asset;
@property (weak, nonatomic) id<GameVideoRecommendCardDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUp;
- (void)layoutSubviews;
- (id)createPlayerView;
- (void)startPlay;
- (void)pausePlay;
- (id)getPlayerInfoWithUrl:(id)a0;
- (void)configWithRecommendAsset:(id)a0;
- (void)addTagViews:(id)a0;
- (id)calculateCreateTitle:(id)a0;
- (void)goPublishAction;
- (void)selectAction;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)dealloc;
- (void).cxx_destruct;

@end
