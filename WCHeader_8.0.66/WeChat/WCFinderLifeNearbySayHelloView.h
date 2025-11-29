@class MMSayHelloButton;
@protocol WCFinderLifeNearbySayHelloViewDelegate;

@interface WCFinderLifeNearbySayHelloView : UIView

@property (retain, nonatomic) MMSayHelloButton *sayHelloBtn;
@property (weak, nonatomic) id<WCFinderLifeNearbySayHelloViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubview;
- (void)layoutSubviews;
- (void)clickBtn;
- (void).cxx_destruct;

@end
