@class AFDStory25FeedBarPublishLoadingView, UIView;
@protocol AFDViewedBottomInnerViewProtocol;

@interface AFDViewedBottomView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView<AFDViewedBottomInnerViewProtocol> *innerView;
@property (retain, nonatomic) AFDStory25FeedBarPublishLoadingView *publishLoadingView;

- (void)layoutSubviews;
- (void)setupUIOnInit;
- (void)setEffectViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
