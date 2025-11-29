@class NSArray, AWESearchAutoPlayHandler, NSString;
@protocol SearchDynamicElementStatusDelegate;

@interface AWESearchLynxListContainerElement : SearchListContainerElement <AWESearchAutoPlayCardProtocol, AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, AWESearchLynxElementViewProtocol>

@property (nonatomic) long long currentTransitionIndex;
@property (nonatomic) BOOL transferingToFullScreen;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL shouldDelayInteraction;
@property (retain, nonatomic) NSArray *idList;
@property (copy, nonatomic) id /* block */ playbackTimeBlock;
@property (nonatomic) double playbackTime;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) long long transitionIndex;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)liveTransitionContext;
- (id)modernTransitionContext;
- (id)getEngine;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (long long)modernUpdateOffsetDiffWithItem:(id)a0 initialIndex:(long long)a1 originOffset:(long long)a2;
- (BOOL)delayInteraction;
- (void)updateAwemeList:(id)a0;
- (void)resetLivePlayer;
- (id)p_searchPageScrollFpsSceneName;
- (id)p_searchPageScrollFpsExtraData;
- (void)addObserverForPaymentVideoIfNeeded;
- (void)updateWithPaidAwemeModel:(id)a0;
- (void)elementDidFinishBind;
- (id)createComponentWrapperAtIndex:(long long)a0 withComponentSessionId:(id)a1;
- (void)customScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)customScrollViewWillBeginDragging:(id)a0;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (void)refreshAwemeList:(id)a0;
- (void)updateLoadMoreAwemeList:(id)a0;
- (void)updateTransitionIndex:(long long)a0 idList:(id)a1;
- (long long)currentCollectionIndexForIdIndex:(long long)a0;
- (void)transitionWithOffset:(long long)a0;
- (id)p_cardContext;
- (id)cellWrapperAtIndex:(long long)a0;
- (void)refreshAwemeListForAllWrapper;
- (void)updateCurrentTransitionIndex:(long long)a0;
- (void).cxx_destruct;
- (id)transitionContext;
- (id)videoView;
- (id)transitionContextProvider;
- (id)livePlayer;

@end
