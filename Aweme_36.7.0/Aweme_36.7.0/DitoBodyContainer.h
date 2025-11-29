@class DitoPageContext, NSString, DitoNestedScrollExtensionV2, UIScrollView;
@protocol UIGestureRecognizerDelegate;

@interface DitoBodyContainer : UICollectionView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (weak, nonatomic) DitoNestedScrollExtensionV2 *nestedScrollExtensionV2;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) DitoPageContext *pageContext;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> panGestureDelegate;
@property (nonatomic) double minBodyContentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void)interruptFling;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
