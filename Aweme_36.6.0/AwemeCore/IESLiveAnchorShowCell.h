@class UILabel, UIButton, IESLiveAnchorShowCellItem;

@interface IESLiveAnchorShowCell : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *numLabel;
@property (retain, nonatomic) UIButton *delButton;
@property (retain, nonatomic) IESLiveAnchorShowCellItem *item;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_commonInit;

@end
