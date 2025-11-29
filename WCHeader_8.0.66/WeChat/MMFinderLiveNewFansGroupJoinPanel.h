@class MMFinderLiveTask, MMFinderLiveTaskId, WCFinderAnimationLoadingView, MMUIMaskContainerView, MMFinderLiveFansGroupIntroView, UIView, UIScrollView, NSString, MMUILabel, MMFinderLiveRewardGiftItem, NSArray, MMLiveHalfScreenTitleBarView, MMUIButton;

@interface MMFinderLiveNewFansGroupJoinPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>

@property (nonatomic) unsigned long long openScene;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *joinFansGroupGiftItem;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) MMUIMaskContainerView *scrollViewContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMUIButton *introductionButton;
@property (retain, nonatomic) MMUILabel *fansGroupTitleLabel;
@property (retain, nonatomic) MMUILabel *fansCountInGroupLabel;
@property (retain, nonatomic) MMUIButton *joinFansGroupButton;
@property (nonatomic) BOOL needPurchase;
@property (nonatomic) BOOL needPurchaseSuperfan;
@property (retain, nonatomic) MMFinderLiveFansGroupIntroView *superFanIntroView;
@property (retain, nonatomic) MMFinderLiveFansGroupIntroView *normalFanIntroView;
@property (retain, nonatomic) NSArray *interestCells;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) BOOL defaultSelectSuperfan;
@property (copy, nonatomic) id /* block */ joinNormalFanGroupCallback;
@property (copy, nonatomic) id /* block */ joinSuperfanCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 giftItem:(id)a1 openScene:(unsigned long long)a2 defaultSelectSuperfanIfCan:(BOOL)a3;
- (void)initView;
- (void)initIntroViews;
- (void)initInterestViews;
- (id)buildInterestCellWithIconName:(id)a0 title:(id)a1 desc:(id)a2;
- (BOOL)shouldAdaptToDarkLight;
- (void)setupPageSheetConfig;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)refreshFansGroupInfo;
- (void)createContentScrollView;
- (void)layoutContentScrollView;
- (void)updateScrollViewContentSize;
- (void)updateJoinButtonTitle;
- (void)layoutSubviews;
- (void)onIntroductionButtonClicked;
- (void)gotoDetailPage;
- (void)onJoinFansGroupButtonClicked;
- (void)onFangroupIntroViewTapped:(id)a0;
- (void)_joinSuperfanGroup;
- (void)_followAnchorWithCompletion:(id /* block */)a0;
- (void)_joinNormalFansGroup;
- (void)joinFansGroupAfterFollowed;
- (void)joinFansGroupWithCompletion:(id /* block */)a0;
- (void)reportForOpenFansGroupDetailPage;
- (void)reportForPanelExpose;
- (void)reportForJoinButtonClick;
- (id)audienceLogReporter;
- (BOOL)isFollowAnchor;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
