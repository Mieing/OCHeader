@class NSString, UIImageView, UILabel, UIView;

@interface BDPPhoneNumberPermissionContentView_HG : UIView {
    UILabel *_phoneNumberLabel;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *phoneIconView;
@property (copy, nonatomic) NSString *phoneNumber;

- (void)setupContainer;
- (void)setupSubTitleLabel;
- (void)setupBorders;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setupTitleLabel;

@end
