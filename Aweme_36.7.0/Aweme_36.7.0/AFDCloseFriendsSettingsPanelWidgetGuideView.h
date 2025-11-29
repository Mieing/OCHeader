@class UIImageView, UILabel;

@interface AFDCloseFriendsSettingsPanelWidgetGuideView : UIButton

@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UILabel *guideTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end
