@class MMUIButton, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveRewardGiftSelectionView, MMFinderLiveGiftWallSettingView, MMFinderLiveRewardWishInputView, NSMutableArray, UIScrollView, NSString, MMUILabel, NSArray, MMLiveHalfScreenTitleBarView, UIImageView;

@interface MMFinderLiveSaveWishListPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardWishViewDelegate, MMLiveRewardGiftSelectionViewDelegate, MMFinderLiveRewardWishInputViewDelegate, MMFinderLiveGiftWallSettingViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) MMUILabel *priceTitleLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) MMFinderLiveRewardWishInputView *inputView;
@property (retain, nonatomic) MMLiveRewardGiftSelectionView *giftSelectionView;
@property (retain, nonatomic) NSMutableArray *targetGiftViews;
@property (retain, nonatomic) NSMutableArray *displayGiftItemViews;
@property (nonatomic) unsigned int totalPrice;
@property (nonatomic) BOOL isModify;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) NSArray *lastRewardWishList;
@property (retain, nonatomic) MMFinderLiveGiftWallSettingView *giftWallSettingView;
@property (copy, nonatomic) id /* block */ dismissedCallBlock;
@property (copy, nonatomic) id /* block */ clickHelpButtonCallBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 rewardWishList:(id)a1;
- (void)initView;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initTargetGiftViews;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)updateWithWishes:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleBarView;
- (void)layoutPriceView;
- (void)layoutTargetGiftViews;
- (double)contentWidth;
- (double)contentHeight;
- (void)addDisplayLiveRewardWishView:(id)a0;
- (void)removeDisplayLiveRewardWishView:(id)a0;
- (void)updateTotalPrice;
- (void)onDoneButtonClicked;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)onClickGiftWallHelp;
- (void)onAddTargetRewardGift:(id)a0;
- (void)onUpdateTargetRewardCount:(id)a0;
- (void)onClearCurrentLiveRewardWish:(id)a0;
- (void)onInputTargetCount:(unsigned int)a0;
- (void)onSelectGiftWithGiftItem:(id)a0;
- (void)onRewardGiftSelectionViewWillClose:(BOOL)a0;
- (void).cxx_destruct;

@end
