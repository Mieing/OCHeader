@class UIImageView, YYLabel, NSString;

@interface AWEBaseGuideView : UIView <AWEConfigBaseGuideViewProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeSubviewConstrains;
- (void)configAvatarImageView;
- (void)configTitleLabel;
- (void)configDescriptionLabel;
- (void)remakeSubviewConstrains;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setupUI;
- (double)viewHeight;

@end
