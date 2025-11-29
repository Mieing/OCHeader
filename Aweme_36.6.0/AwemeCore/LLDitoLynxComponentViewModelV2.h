@class LLPOISkeletonView, NSString, LLDitoLynxExtensionV2, UIView, LLDitoLynxComponentViewV2, NSDictionary, NSNumber, LLDitoNode;
@protocol LLDitoLynxContainerProtocol;

@interface LLDitoLynxComponentViewModelV2 : LLDitoComponentViewModel <LLDitoComponentLynxStickyProtocol, LLDitoLynxComponentViewModelProtocol> {
    BOOL isCompleteVisible;
}

@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL receivePageScroll;
@property (nonatomic) BOOL enableAutoPlay;
@property (nonatomic) BOOL enableVisibleRectEvent;
@property (nonatomic) double lastScrollEventTimeStamp;
@property (nonatomic) double lastVisibleRectEventTimeStamp;
@property (readonly, weak, nonatomic) LLDitoLynxExtensionV2 *lynxExtensionV2;
@property (readonly, nonatomic) UIView<LLDitoLynxContainerProtocol> *lynxContainer;
@property (weak, nonatomic) LLDitoNode *inner_node;
@property (nonatomic) BOOL needNestedScroll;
@property (copy, nonatomic) NSString *stickViewId;
@property (nonatomic) double navigationBarAlpha;
@property (retain, nonatomic) LLPOISkeletonView *skeletonView;
@property (copy, nonatomic) NSDictionary *skeletonData;
@property (retain, nonatomic) NSNumber *lastScrollViewOffsetY;
@property (nonatomic) double presetWidth;
@property (readonly, nonatomic) LLDitoNode *node;
@property (nonatomic) double scrollEventThrottle;
@property (nonatomic) double visibleRectEventThrottle;
@property (nonatomic) double updateDuration;
@property (nonatomic) BOOL nestedScrollViewScrollEnabled;
@property (readonly, copy, nonatomic) NSString *cardPerfKey;
@property (weak, nonatomic) LLDitoLynxComponentViewV2 *lynxComponentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)componentReuseIdentifier;
- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)pageView:(id)a0 scrollViewDidEndDecelerating:(id)a1;
- (void)didUpdateData;
- (void)receiveNaviBarStatusModify:(id)a0;
- (void)componentViewDidCompleteShow;
- (void)componentViewWillShow;
- (BOOL)disableComponentSticky;
- (void)componentViewDidEndShow;
- (void)componentViewWillEndShow;
- (id)fetchSkeletonView;
- (void)setupSkeletonViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)parseNeedNestedScrollValue;
- (void)refreshNode:(id)a0;
- (void)sendScrollEventWithDeltaY:(id)a0;
- (void)sendScrollEvent:(id)a0;
- (void)pageView:(id)a0 scrollViewDidEndScrollingAnimation:(id)a1;
- (void)didFinishLoadWithURL:(id)a0;
- (void)didLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)pageDidShow;
- (void)bindContainerID:(id)a0;
- (BOOL)overflowVisible;
- (void)forceNotifyLynxScrollViewVisibilityChanged:(id)a0;
- (BOOL)isCompleteVisible;
- (id)extraComponentTrackParams;
- (void)sendShowElevatorShadowEvent:(double)a0;
- (void)componentViewSendLynxCustomEvent:(id)a0;
- (void)componentViewSetStickyStatusEvent:(id)a0;
- (void)pageDidEndShow;
- (void)sendVisibleEvent;
- (void)setIsCompleteVisible:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
