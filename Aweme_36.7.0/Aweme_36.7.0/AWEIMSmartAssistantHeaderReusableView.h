@class UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface AWEIMSmartAssistantHeaderReusableView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *infoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UITapGestureRecognizer *tap;

- (void)handleSubTitleStackViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
