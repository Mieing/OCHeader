@class UILabel, UIImageView, UIButton;

@interface AWEUserWorkWaterFallRevisitBottomView : UIView

@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *authorAvatarIconView;
@property (retain, nonatomic) UIImageView *rightActionIcon;
@property (retain, nonatomic) UIButton *rightActionButton;
@property (copy, nonatomic) id /* block */ rightTapActionBlock;

- (void)rightActionButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;

@end
