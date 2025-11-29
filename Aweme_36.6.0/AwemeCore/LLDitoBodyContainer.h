@class LLDitoNestedScrollExtensionV2, NSString, UIScrollView, LLDitoPageContext;
@protocol UIGestureRecognizerDelegate;

@interface LLDitoBodyContainer : UICollectionView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) LLDitoNestedScrollExtensionV2 *nestedScrollExtensionV2;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> panGestureDelegate;
@property (nonatomic) double minBodyContentHeight;
@property (weak, nonatomic) UIScrollView *ll_nestedScrollView;
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
