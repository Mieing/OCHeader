@class UIStackView, UIView, AWEAwemeModel, AWEShakeShareAwemeLoadingLabel, AWEUserModel, UIImageView, UIButton, UILabel;

@interface AWEShakeShareAwemeCardView : UIView

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEShakeShareAwemeLoadingLabel *subTitleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *shareButton;
@property (nonatomic) BOOL isSharingLikedAweme;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)initView;
- (void)configCoverWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (void)configDescriptionLabelWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (void)configShareButtonWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (void)configTitleLabelWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (void)configSubTitleLabelWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (void)configItemAlphaWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (double)titleMaxWidth;
- (id)truncateStringWithPrefix:(id)a0 middle:(id)a1 postfix:(id)a2 maxWidth:(double)a3 attributes:(id)a4;
- (void)coverImageViewTapped;
- (void)updateWithStatus:(unsigned long long)a0 aweme:(id)a1 user:(id)a2;
- (double)subtitleMaxWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;
- (void)shareButtonTapped;

@end
