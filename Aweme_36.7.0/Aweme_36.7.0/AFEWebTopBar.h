@class UIButton, UILabel;

@interface AFEWebTopBar : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupViews;

@end
