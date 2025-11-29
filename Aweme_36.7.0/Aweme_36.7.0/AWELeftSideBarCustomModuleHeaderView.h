@class DUXBaseImageView, AWELeftSideBarCustomModuleAccessibilityButton, UILabel, UIView, DUXBadge;

@interface AWELeftSideBarCustomModuleHeaderView : UIView

@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWELeftSideBarCustomModuleAccessibilityButton *clickButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) DUXBadge *redDot;
@property (retain, nonatomic) DUXBadge *numericalRedDot;
@property (retain, nonatomic) DUXBaseImageView *arrowView;
@property (nonatomic) long long subViewConstraintType;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0 withMaxCount:(unsigned long long)a1;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (void)clickButtonClick;
- (void)newAWELeftSideBarCustomModuleHeaderViewSetCorner;
- (void)oldAWELeftSideBarCustomModuleHeaderViewSetCorner;
- (void)p_updateSubViewConstraint:(BOOL)a0;
- (void)p_setButtonAccessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 themeStyle:(long long)a3;
- (void)updateLeftSideBarTitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (double)viewHeight;

@end
