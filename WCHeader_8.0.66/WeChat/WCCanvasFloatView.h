@class UIView;
@protocol WCCanvasFloatViewDelegate;

@interface WCCanvasFloatView : MMUIView

@property (nonatomic) BOOL forbiddenLayoutComponent;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<WCCanvasFloatViewDelegate> delegate;

- (id)initWithComponent:(id)a0;
- (void)tryCloseFloatView:(id)a0 forEvent:(id)a1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)notifyViewDidAppear;
- (void)dealloc;
- (id)getComponent;
- (void)showBGView;
- (void)tryToDoOpenAnimation;
- (void)tryToDoCloseAnimation;
- (void)removeView;
- (BOOL)isForbiddenToClose;
- (void).cxx_destruct;

@end
