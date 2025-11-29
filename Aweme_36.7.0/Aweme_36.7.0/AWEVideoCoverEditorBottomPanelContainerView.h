@class NSString;
@protocol AWEVideoCoverEditorBottomPanelContainerViewDelegate;

@interface AWEVideoCoverEditorBottomPanelContainerView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) BOOL isScrollAnimating;
@property (weak, nonatomic) id<AWEVideoCoverEditorBottomPanelContainerViewDelegate> panelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOnTop;
- (void)setupWithMinHeight:(double)a0 maxHeight:(double)a1;
- (void)scrollToMaxHeight;
- (void)scrollToMinHeight;
- (id)initWithPanelMinHeight:(double)a0 maxHeight:(double)a1;
- (BOOL)isOnBottom;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addSubview:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handlePanGesture:(id)a0;

@end
