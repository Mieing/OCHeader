@class UIStackView, UIImageView, UILabel, UIView;

@interface AWEFeedNearbyMallCardItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) UILabel *secondTagLabel;
@property (retain, nonatomic) UILabel *thirdTagLabel;
@property (retain, nonatomic) UIView *subTitleView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *cornerView;
@property (retain, nonatomic) UILabel *cornerLabel;
@property (copy, nonatomic) id /* block */ tapHandle;

- (void)__buildUI;
- (void)__layoutUI;
- (void)__addAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
