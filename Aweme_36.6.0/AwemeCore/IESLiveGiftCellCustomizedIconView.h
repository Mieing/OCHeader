@class IESLiveAnimatedImageView;

@interface IESLiveGiftCellCustomizedIconView : UIView

@property (retain, nonatomic) IESLiveAnimatedImageView *imageView;
@property (nonatomic) long long currentIndex;

- (void)showGiftCellWithCustomizedIconModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
