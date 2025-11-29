@class AWENearbyDynamicEventSubscriber, NSString, AWEBinding, UICollectionView;

@interface AWENearbyDynamicFeedCell : AWENearbyC2BaseFeedCell <UIGestureRecognizerDelegate, AWENearbyC2ContainerFeedCellProtocol>

@property (retain, nonatomic) AWEBinding *bindDigg;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *subscriber;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *subscriber2;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *subscriber3;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *subscriber4;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *subscriber5;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *subscriber6;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *cardPlayEvent;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *c2AdCardClick;
@property (nonatomic) long long coverShowStartTs;
@property (nonatomic) double configLynxStartTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UICollectionView *collectionView;

+ (struct CGSize { double x0; double x1; })calculateCellSizeWithWidth:(double)a0 model:(id)a1;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)didClick;
- (void)updateLynxData:(id)a0;
- (id)commonParamsWithAweme:(id)a0;
- (void)endDisplay;
- (id)feedbackModelWithLongPress:(id)a0;
- (BOOL)trackPartialShowEnable;
- (void)trackPartialShowForOtherEvents;
- (BOOL)trackClientShowEnable;
- (void)trackPartialShowtimeForOtherEvents;
- (BOOL)trackClientClickEnable;
- (void)configCellWithModel:(id)a0 withIndex:(long long)a1 cellWidth:(double)a2 pageContext:(id)a3;
- (void)onClickWithModel:(id)a0;
- (void)willDisplayWhenDidAppear;
- (BOOL)trackPartialShowtimeEnable;
- (void)resetChildViewController;
- (void)removeLynxObservers;
- (void)addLynxObservers;
- (void)__configLynxWithModel:(id)a0 cellWidth:(double)a1 pageContext:(id)a2;
- (void)preloadCardDetailIfNeed;
- (BOOL)showingAfterRecommend;
- (id)hostViewIfItIsLongPressed:(id)a0;
- (id)afterRecommendViewIfItIsLongPressed:(id)a0;
- (id)afterRecommendModelFromData:(id)a0;
- (id)feedbackDataWithAfterRecommendModel:(id)a0 height:(double)a1;
- (BOOL)isLynxContainerFirstScreen;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end
