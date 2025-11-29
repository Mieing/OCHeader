@class NSString, UIImageView, UILabel, UIView;

@interface BDPPhoneNumberPermissionContentView_HG_V2 : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *numContainerView;
@property (retain, nonatomic) UILabel *number;
@property (retain, nonatomic) UIView *numberTag;
@property (retain, nonatomic) UIImageView *selectedImg;
@property (copy, nonatomic) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
