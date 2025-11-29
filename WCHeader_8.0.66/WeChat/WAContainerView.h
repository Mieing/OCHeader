@class UIScrollView, UIView;

@interface WAContainerView : NSObject

@property (nonatomic) unsigned int containerId;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIView *nativeView;
@property (readonly, nonatomic) UIView *nativeViewContainer;

- (id)initByContainerId:(unsigned int)a0;
- (void)setContainerScrollEnabled:(BOOL)a0;
- (void)adjustHookView;
- (void)updateContainer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (id)containerLayerName;
- (void).cxx_destruct;

@end
