@class MultitalkMinimizeViewController, NSString, SequenceAnimationObject;
@protocol MultitalkMinimizeWindowDelegate;

@interface MultitalkMinimizeWindow : MMUIWindow <MultitalkMinimizeViewControllerDelegate>

@property (retain, nonatomic) SequenceAnimationObject *m_animationObject;
@property (retain, nonatomic) SequenceAnimationObject *m_animationObjectForAlpha;
@property (retain, nonatomic) MultitalkMinimizeViewController *m_viewController;
@property (weak, nonatomic) id<MultitalkMinimizeWindowDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setBackgroundColor:(id)a0;
- (void)startTimer;
- (void)updateDescMode:(unsigned long long)a0 withDisplayTime:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vaildFrame;
- (void)hideMinimizeWindow;
- (void)showMinimizeWindow;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)makeKeyWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenRect;
- (void)onMultitalkMinimizeViewControllerTap;
- (void).cxx_destruct;

@end
