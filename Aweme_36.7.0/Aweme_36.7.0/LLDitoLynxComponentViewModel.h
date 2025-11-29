@class LLDitoLynxNativeBridgeManager, NSString, LLPOISkeletonView, NSDictionary, LLDitoLynxComponentView, LLCubeView, IESLLAwemeModel;

@interface LLDitoLynxComponentViewModel : LLDitoComponentViewModel <LLDitoComponentLynxStickyProtocol, LLDitoLynxNativeCommunicationProtocol, LLDitoLynxComponentViewModelProtocol> {
    BOOL _enableEventThrough;
}

@property (retain, nonatomic) LLDitoLynxNativeBridgeManager *lnBridgeManager;
@property (nonatomic) BOOL receivePageScroll;
@property (nonatomic) BOOL enableAutoPlay;
@property (nonatomic) BOOL forceCloseAutoPlay;
@property (nonatomic) double lastScrollEventTimeStamp;
@property (nonatomic) double scrollEventThrottle;
@property (nonatomic) BOOL enableVisibleRectEvent;
@property (nonatomic) double lastVisibleRectEventTimeStamp;
@property (nonatomic) double visibleRectEventThrottle;
@property (copy, nonatomic) NSString *stickViewId;
@property (nonatomic) double navigationBarAlpha;
@property (nonatomic) BOOL needNestedScroll;
@property (nonatomic) BOOL hasReceiveSetScrollEventFrequencyEvent;
@property (retain, nonatomic) LLPOISkeletonView *skeletonView;
@property (copy, nonatomic) NSDictionary *skeletonData;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *uniqueTag;
@property (weak, nonatomic) LLDitoLynxComponentView *lynxComponentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) LLCubeView *lynxContainerView;
@property (nonatomic) double updateDuration;
@property (retain, nonatomic) IESLLAwemeModel *aweme;

- (void)setEnableEventThrough:(BOOL)a0;
- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)pageView:(id)a0 scrollViewDidEndDecelerating:(id)a1;
- (id)findLastLynxUIIn:(id)a0 withResponseEvent:(id)a1;
- (void)sendCustomLynxEvent:(id)a0 lynxUI:(id)a1;
- (void)receiveNaviBarStatusModify:(id)a0;
- (BOOL)enableEventThrough;
- (void)componentViewDidCompleteShow;
- (void)componentViewWillShow;
- (void)componentViewDidEndShow;
- (id)fetchSkeletonView;
- (void)setupSkeletonViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)parseNeedNestedScrollValue;
- (void)sendScrollEvent:(id)a0;
- (void)pageView:(id)a0 scrollViewDidEndScrollingAnimation:(id)a1;
- (void)didFinishLoadWithURL:(id)a0;
- (void)didLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)pageDidShow;
- (BOOL)judgeShouldSendScrollEvent:(id)a0 hasSetFrequency:(BOOL)a1;
- (void)bindContainerID:(id)a0;
- (BOOL)overflowVisible;
- (void)forceNotifyLynxScrollViewVisibilityChanged:(id)a0;
- (id)extraComponentTrackParams;
- (void)sendShowElevatorShadowEvent:(double)a0;
- (void)componentViewSendLynxCustomEvent:(id)a0;
- (void)componentViewSetStickyStatusEvent:(id)a0;
- (void)pageDidEndShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)dealloc;

@end
