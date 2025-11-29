@class MMUIButton, UIImageView, UILabel, UIView, UIButton;
@protocol TingQQMembershipViewDelegate;

@interface TingQQMembershipView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) MMUIButton *wecoinButton;
@property (weak, nonatomic) id<TingQQMembershipViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configLayout;
- (void)layoutSubviews;
- (void)updateDisplayWithTitle:(id)a0 desc:(id)a1 btnText:(id)a2;
- (void)actionButtonClicked:(id)a0;
- (void)wecoinButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
