@class NSString, AWEGeneralSearchArticleCardView;
@protocol AWEModernFeedCellContext, AWEModernFeedCellFrameProtocol;

@interface AWEGeneralSearchArticleCardViewController : UIViewController <AWEModernFeedCellControllerProtocol, AWEGeneralSearchVideoCardContext>

@property (retain, nonatomic) AWEGeneralSearchArticleCardView *articleCardView;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> bindedCellFrame;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (id)transformCardModelForCellFrame:(id)a0;
+ (id)transformCardModelForCellFrame:(id)a0 viewModel:(id)a1;
+ (void)updateVideoCardModel:(id)a0 withCellFrame:(id)a1;

- (id)logExtraDict;
- (BOOL)isContentLoading;
- (id)relatedViewControllerForPrefetch;
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
- (id)tapNotTriggerArea;
- (void)reConfigCellFrame;
- (void)addSubviewToAccessibilityElementsIfNeed:(id)a0;
- (BOOL)isInCachalotEnv;
- (void)reloadCurrentCard;
- (void)videoSinglePlayed:(long long)a0 cardModel:(id)a1 awemeModel:(id)a2 isFromDetail:(BOOL)a3;
- (void)reportTagsFromComponentToVCWithTags:(id)a0 searchID:(id)a1;
- (long long)indexOfAccessibilityElementToBeInserted:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)prepareForReuse;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
