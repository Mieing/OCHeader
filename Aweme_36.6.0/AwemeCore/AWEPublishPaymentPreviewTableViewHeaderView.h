@class UIImageView, UIView, UIStackView;

@interface AWEPublishPaymentPreviewTableViewHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *imageEdgeView;
@property (retain, nonatomic) UIImageView *tipBackgroundImageView;
@property (copy, nonatomic) id /* block */ autoFillHandler;
@property (copy, nonatomic) id /* block */ closeHandler;

+ (id)headerViewIdentify;

- (void)configUI;
- (void)configCoverImageView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
