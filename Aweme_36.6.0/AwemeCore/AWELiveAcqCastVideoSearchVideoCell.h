@class UIImageView, AWEFeedVideoTagView, AWEAwemeModel, UILabel, UIView;

@interface AWELiveAcqCastVideoSearchVideoCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEFeedVideoTagView *videoTagView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *diggImageView;
@property (retain, nonatomic) UIImageView *hotSpotTagImageView;
@property (retain, nonatomic) UIImageView *mixVideoIconView;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *diggCountLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ didClickMix;

+ (BOOL)enableMixVideo:(id)a0;

- (id)appendMixVideoTagIfNeededWithAweme:(id)a0 attributedString:(id)a1;
- (void)updateCoverImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
