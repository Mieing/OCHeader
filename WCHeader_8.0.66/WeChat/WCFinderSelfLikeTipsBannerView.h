@class WCFinderHeadImageView, UILabel, MMUIButton, UIButton;

@interface WCFinderSelfLikeTipsBannerView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIButton *cancelLikeButton;
@property (retain, nonatomic) MMUIButton *likeActionButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configIconByContentVM:(id)a0;
- (void)updateUIByIsLike:(BOOL)a0;
- (void)layoutAllSubviews;
- (void)setUpUI;
- (void).cxx_destruct;

@end
