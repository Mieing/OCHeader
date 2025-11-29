@class UILabel, UIButton, UIView;

@interface MsgImageSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectButton;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ onSelectButtonTapped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onButtonTapped;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
