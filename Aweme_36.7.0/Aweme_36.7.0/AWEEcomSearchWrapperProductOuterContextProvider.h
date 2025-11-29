@class NSString, NSIndexPath, UIView;
@protocol AWEEcomSearchProductTransitionSourceVCDelegate;

@interface AWEEcomSearchWrapperProductOuterContextProvider : NSObject <AWEEcomSearchWrapperProductTransitionProtocol, AWEEcomSearchGoodsDetailZoomOuterContextProviderProtocol>

@property (retain, nonatomic) UIView *transitionView;
@property (weak, nonatomic) UIView *lynxTransitionView;
@property (copy, nonatomic) NSString *docID;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEEcomSearchProductTransitionSourceVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (id)zoomTransitionStartViewToInner:(BOOL)a0;
- (BOOL)zoomOuterWithShrink;
- (double)transitionCornerRadius;
- (void)modernTransitionInDidComplete;
- (void).cxx_destruct;

@end
