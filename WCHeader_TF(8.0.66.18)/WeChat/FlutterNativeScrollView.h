@class NSString, UIView;

@interface FlutterNativeScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ offsetCallback;
@property (retain, nonatomic) UIView *flutterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)attachFlutterView:(id)a0;
- (void)setContentOffsetCallback:(id /* block */)a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)sendSubviewToBack:(id)a0;
- (void).cxx_destruct;

@end
