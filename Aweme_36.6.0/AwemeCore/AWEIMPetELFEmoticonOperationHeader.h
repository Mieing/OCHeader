@class UIControl, NSString, UIImageView, UILabel, UIView;

@interface AWEIMPetELFEmoticonOperationHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIControl *retryControl;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIImageView *transferImgView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *conShortID;
@property (copy, nonatomic) NSString *conID;

- (void).cxx_destruct;
- (void)retryAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
