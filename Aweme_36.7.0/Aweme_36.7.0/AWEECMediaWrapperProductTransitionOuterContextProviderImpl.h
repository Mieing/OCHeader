@class NSString, AWEECMediaWrapperElement, UIView;
@protocol IESECMallHomeViewProtocol;

@interface AWEECMediaWrapperProductTransitionOuterContextProviderImpl : NSObject <AWEECMallGoodsDetailZoomOuterContextProvider>

@property (copy, nonatomic) NSString *transitionItemId;
@property (retain, nonatomic) UIView *transitionView;
@property (weak, nonatomic) UIView<IESECMallHomeViewProtocol> *homeView;
@property (weak, nonatomic) UIView *naTransitionView;
@property (weak, nonatomic) UIView *lynxTransitionView;
@property (nonatomic) double ipadSizeScale;
@property (weak, nonatomic) AWEECMediaWrapperElement *mediaWrapperElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (id)zoomTransitionStartViewToInner:(BOOL)a0;
- (BOOL)zoomOuterWithShrink;
- (double)transitionCornerRadius;
- (void)modernTransitionInDidComplete;
- (void)mallUpdateFilters:(id)a0;
- (void)clearFirstCut;
- (void).cxx_destruct;

@end
