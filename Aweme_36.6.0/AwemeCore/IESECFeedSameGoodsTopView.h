@class UIImageView, UILabel, UIButton;

@interface IESECFeedSameGoodsTopView : UIView

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL showFullScreenStyle;
@property (copy, nonatomic) id /* block */ close;

- (void)closeButtonClick:(id)a0;
- (void)arrowTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
