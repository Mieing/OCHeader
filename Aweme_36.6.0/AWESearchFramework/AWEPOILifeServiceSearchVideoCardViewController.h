@class NSString, UIViewController, AWEPOILifeServiceSearchVideoCardView;
@protocol AWESearchVideoRecommendedWordViewProtocol, AWEModernFeedCellContext, AWEModernFeedCellFrameProtocol;

@interface AWEPOILifeServiceSearchVideoCardViewController : UIViewController <AWEModernFeedCellControllerProtocol, AWEGeneralSearchVideoCardContext, AWESearchModernVideoProtocol>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEPOILifeServiceSearchVideoCardView *videoCardView;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> bindedCellFrame;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<AWESearchVideoRecommendedWordViewProtocol> *videoRecommendedWordView;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (id)transformCardModelForCellFrame:(id)a0;
+ (void)updateVideoCardModel:(id)a0 withCellFrame:(id)a1;
+ (BOOL)shouldUseTileController:(id)a0;
+ (BOOL)shouldUseADTileControllerWith:(id)a0;

- (id)logExtraDict;
- (BOOL)isContentLoading;
- (void)startMagnifyTransition;
- (void)endShrinkTransition;
- (BOOL)delayInteraction;
- (BOOL)shouldSetMask;
- (id)relatedViewControllerForPrefetch;
- (id)displayPercentagesForCallback:(BOOL)a0;
- (void)componentDisplayWithTopPercentage:(double)a0 isReverse:(BOOL)a1;
- (void)didEndShowing;
- (void)updateWithReferString:(id)a0;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)didBecomeVisibleToUsers;
- (void)singleTapEnterAwemeDetailWithExtra:(id)a0;
- (id)bindedData;
- (void)saveCurrentScrollingState;
- (void)focusCurrentCellIfNeeded;
- (void)forceBecomeActive;
- (void)singleTapEnterAwemeDetail;
- (void)videoPlayerWillPlay;
- (void)endForceBecomingActive;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (void)reConfigCellFrame;
- (void)addSubviewToAccessibilityElementsIfNeed:(id)a0;
- (BOOL)isInCachalotEnv;
- (void)reloadCurrentCard;
- (void)videoSinglePlayed:(long long)a0 cardModel:(id)a1 awemeModel:(id)a2 isFromDetail:(BOOL)a3;
- (void)reportTagsFromComponentToVCWithTags:(id)a0 searchID:(id)a1;
- (long long)indexOfAccessibilityElementToBeInserted:(id)a0;
- (BOOL)shouldShowVideoRecommendedWord:(id)a0;
- (void)handleVideoRecommendedWordViewShow:(id)a0 awemeModel:(id)a1 extraParams:(id)a2 failureCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)prepareForReuse;
- (id)transitionContext;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
