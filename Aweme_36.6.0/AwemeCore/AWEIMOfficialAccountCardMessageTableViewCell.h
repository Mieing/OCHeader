@class UIImageView, UILabel, UIView;

@interface AWEIMOfficialAccountCardMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIImageView *profileAvatar;
@property (retain, nonatomic) UIView *nickNameContainerView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIView *roleBackgroundView;
@property (retain, nonatomic) UIView *roleView;
@property (retain, nonatomic) UIImageView *roleImageView;
@property (retain, nonatomic) UILabel *roleLabel;
@property (retain, nonatomic) UILabel *introLabel;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)setupBinding;
- (void)configWithMessage:(id)a0;
- (id)accountCardMessageViewModel;
- (void)updateAllIdentifyView;
- (void)p_setupServiceDoctorConstraints;
- (void)setupRoleLableText;
- (void)setupRoleImageView;
- (void)setupRoleView;
- (void)tapUserAvatar;
- (void)__handleRoleViewTapped;
- (void)tapIdentifyView;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
