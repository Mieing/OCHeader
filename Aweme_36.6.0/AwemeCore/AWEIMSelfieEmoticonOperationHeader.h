@class UIControl, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMSelfieEmoticonOperationHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIControl *retryControl;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIImageView *transferImgView;
@property (retain, nonatomic) UIView *containerWithRealXmoji;
@property (retain, nonatomic) UIImageView *leftIntroIconImgView;
@property (retain, nonatomic) UILabel *titleLabel2;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *containerWithPlaceholderXmoji;

- (void)actionButtonClicked:(id)a0;
- (void)refreshHeader;
- (void).cxx_destruct;
- (void)retryAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
