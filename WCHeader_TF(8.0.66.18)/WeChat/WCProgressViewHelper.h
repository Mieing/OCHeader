@class WCProgressMaskView, UIViewController, UIView;

@interface WCProgressViewHelper : NSObject

@property (retain, nonatomic) WCProgressMaskView *progressView;
@property (weak, nonatomic) UIViewController *attachedController;
@property (readonly, copy, nonatomic) id /* block */ startProgress;
@property (readonly, copy, nonatomic) id /* block */ stopProgress;
@property (readonly, copy, nonatomic) id /* block */ updateProgress;
@property (readonly, copy, nonatomic) id /* block */ finishProgress;
@property (readonly, copy, nonatomic) id /* block */ showInfinityProgress;
@property (readonly, nonatomic) WCProgressMaskView *progressCircleView;
@property (retain, nonatomic) UIView *progressCircleViewSuperview;

- (id)initWithController:(id)a0;
- (void)resetProgressViewPosition;
- (void)setInteractionBlocked:(BOOL)a0;
- (void).cxx_destruct;

@end
