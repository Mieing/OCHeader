@class UIImageView, UILabel, UIView;

@interface AWEPropMultiSegView : UIView

@property (nonatomic) long long state;
@property (retain, nonatomic) UIImageView *completeImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UILabel *secondsLabel;
@property (retain, nonatomic) UIView *grayCoverView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
