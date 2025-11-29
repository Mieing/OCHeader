@class UIImageView, UIView, AWEUserModel, YYLabel;

@interface AWEPunishBanView : UIView

@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)__setupUI;
- (void)__trackEnterEvent;
- (void)__configDescriptionLabel;
- (void)__openPunishDetailVC;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithUser:(id)a0;

@end
