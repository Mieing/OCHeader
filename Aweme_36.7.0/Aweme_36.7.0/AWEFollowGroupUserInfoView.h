@class UIImageView, NSDictionary, UILabel, AWEUserModel, UIButton;

@interface AWEFollowGroupUserInfoView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *verifiedImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isCommerce;

+ (id)_defaultImage;

- (void)__setupView;
- (void)iconButtonClick;
- (void)configWithUserModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
