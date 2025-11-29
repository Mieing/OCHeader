@class MMFinderLiveFansGroupInterestsCell, MMFinderLiveTask, MMUIButton, MMFinderLiveTaskId, MMUIMaskContainerView, UIView, UIScrollView, MMUILabel, NSString, WCFinderHeadImageView, MMFinderLiveRewardGiftItem, MMLiveHalfScreenTitleBarView, UIImageView;

@interface MMFinderLiveFansGroupJoinPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>

@property (nonatomic) unsigned long long openScene;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *joinFansGroupGiftItem;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMUIButton *introductionButton;
@property (retain, nonatomic) WCFinderHeadImageView *fansGroupCoverView;
@property (retain, nonatomic) MMUILabel *fansGroupTitleLabel;
@property (retain, nonatomic) MMUILabel *fansCountInGroupLabel;
@property (retain, nonatomic) MMUIButton *joinFansGroupButton;
@property (retain, nonatomic) MMFinderLiveFansGroupInterestsCell *specialRankInterestsCell;
@property (retain, nonatomic) MMFinderLiveFansGroupInterestsCell *specialGiftInterestsCell;
@property (retain, nonatomic) MMUILabel *payWecoinLabel;
@property (retain, nonatomic) MMUILabel *payWecoinCountLabel;
@property (retain, nonatomic) UIImageView *payWecoinIcon;
@property (retain, nonatomic) MMUIMaskContainerView *scrollViewContainerView;
@property (nonatomic) BOOL needPurchase;
@property (copy, nonatomic) id /* block */ joinCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 giftItem:(id)a1 openScene:(unsigned long long)a2;
- (void)initView;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (BOOL)shouldAdaptToDarkLight;
- (void)setupPageSheetConfig;
- (void)refreshFansGroupInfo;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleBarView;
- (void)createContentScrollView;
- (void)layoutContentScrollView;
- (void)updateScrollViewContentSize;
- (void)layoutFansContentView;
- (void)layoutFansGroupInterestsContent;
- (void)layPayWecoinInfo;
- (void)layoutJoinButton;
- (double)contentWidth;
- (double)contentHeight;
- (BOOL)isFollowAnchor;
- (void)onIntroductionButtonClicked;
- (void)onJoinFansGroupButtonClicked;
- (void)joinFansGroupAfterFollowed;
- (void)joinFansGroupWithCompletion:(id /* block */)a0;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)reportForPanelExpose;
- (void)reportForJoinButtonClick;
- (void)reportForOpenFansGroupDetailPage;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
