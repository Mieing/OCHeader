@class NSString, UIImageView, UIColor;
@protocol MMUIActivityIndicatorViewDelegate;

@interface MMUIActivityIndicatorView : UIView <GCLoadingViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (weak, nonatomic) id<MMUIActivityIndicatorViewDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL hidesWhenStopped;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double sideLength;

- (void)gcBeginLoading;
- (void)gcEndLoading;
- (id)initWithStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)dealloc;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)startAnimatingFromRadian:(id)a0 needSetAnimating:(BOOL)a1;
- (void)refreshIndicatorView;
- (void)restoreAnimation;
- (void)didMoveToWindow;
- (void)willEnterForeground;
- (void).cxx_destruct;

@end
