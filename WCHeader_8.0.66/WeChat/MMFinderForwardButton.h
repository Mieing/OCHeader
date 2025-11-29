@class UILongPressGestureRecognizer, UIView;
@protocol MMFinderForwardButtonDelegate;

@interface MMFinderForwardButton : UIButton

@property (retain, nonatomic) UIView *mask;
@property (retain, nonatomic) UILongPressGestureRecognizer *longpressGesture;
@property (weak, nonatomic) id<MMFinderForwardButtonDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)onLongPressGesture:(id)a0;
- (void).cxx_destruct;

@end
