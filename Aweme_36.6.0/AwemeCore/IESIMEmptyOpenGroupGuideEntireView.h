@class UILabel, UIStackView, IESIMEmptyOpenGroupGuideEntireViewModel;

@interface IESIMEmptyOpenGroupGuideEntireView : UIView

@property (retain, nonatomic) UILabel *emptyViewTitleLabel;
@property (retain, nonatomic) UILabel *emptyViewDescriptionLabel;
@property (retain, nonatomic) IESIMEmptyOpenGroupGuideEntireViewModel *emptyOpenGroupGuideEntireViewModel;
@property (retain, nonatomic) UIStackView *emptyOpenGroupGuideEntireView;

- (void)p_layout;
- (id)p_getEmptyOpenGroupGuideEntireViewModel;
- (id)p_createOpenGroupEmptyViewSetting;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
