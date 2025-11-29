@class UIImageView, LOTAnimationView, UILabel, UIView;

@interface AWELongVideoEpisodeCell : UICollectionViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dateContainer;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) LOTAnimationView *playingAnimationView;
@property (retain, nonatomic) UILabel *playingLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *cornerMarkLabel;
@property (nonatomic) long long patternStatus;

- (void)setupFrameDrawingUI;
- (void)setupSelectedFrameDrawingUI:(BOOL)a0;
- (void)setupNumberingUI;
- (void)setupSelectedNumberingUI:(BOOL)a0;
- (void)setCornerMarkWithEpisodeModel:(id)a0;
- (void)updateWithEpisodeModel:(id)a0 shouldSimplifyTitle:(BOOL)a1 titleUnit:(id)a2 patternStatus:(long long)a3;
- (void).cxx_destruct;

@end
