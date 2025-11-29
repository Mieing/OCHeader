@class WCFinderFollowButton, WCFinderHeadImageView, WCFinderAuthInfoIconView, UILabel;

@interface WCFinderMJSetDesignerView : MMUIButton

@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *songDescLabel;
@property (retain, nonatomic) WCFinderFollowButton *followBtn;

+ (id)genTitleLabelWithWidth:(double)a0;
+ (id)buildTitleTextView:(double)a0;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubView;
- (void)setupLayout;
- (void)updateWithContactInfo:(id)a0 originCount:(long long)a1;
- (void).cxx_destruct;

@end
