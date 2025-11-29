@class UILabel, UIStackView;

@interface IESIMNaviBarThreadTitleView : UIStackView

@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *threadLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)p_createComponents;
- (void)p_layoutComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
