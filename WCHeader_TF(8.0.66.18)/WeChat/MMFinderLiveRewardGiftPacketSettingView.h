@class UIView, MMTableView, NSArray, NSIndexPath, NSString, UIImageView, MMFinderLiveTaskId, MMFinderLiveRewardLevelConfigs, MMLiveHalfScreenTitleBarView, MMUILabel, MMUIButton, MMLiveWeCoinLabel;
@protocol MMFinderLiveRewardGiftPacketSettingViewDelegate;

@interface MMFinderLiveRewardGiftPacketSettingView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardGiftPacketSettingViewCellDelegate, WCCoinBuyCoinLogicDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) NSArray *viewModelList;
@property (retain, nonatomic) UIView *headingView;
@property (retain, nonatomic) MMUILabel *totalPriceHeadingLabel;
@property (retain, nonatomic) MMUILabel *totalPriceLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (retain, nonatomic) MMLiveWeCoinLabel *balanceLabel;
@property (retain, nonatomic) UIImageView *balanceArrowImageView;
@property (retain, nonatomic) MMTableView *rewardGiftTableView;
@property (retain, nonatomic) NSIndexPath *currentActiveIndexPath;
@property (nonatomic) unsigned int targetRank;
@property (retain, nonatomic) MMFinderLiveRewardLevelConfigs *levelConfig;
@property (weak, nonatomic) id<MMFinderLiveRewardGiftPacketSettingViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 scene:(unsigned long long)a1 giftPacketViewModel:(id)a2 levelConfig:(id)a3;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutTotalPriceLabels;
- (void)layoutBalanceLabel;
- (void)layoutSubviews;
- (void)pageSheetWillDisappear;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)reloadAndRefreshData;
- (void)updateTargetRank:(unsigned int)a0;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)a0;
- (void)chargeCoinWithRechargeScene:(unsigned int)a0;
- (void)buyCoinSuccess:(id)a0;
- (void)buyCoinFail:(id)a0;
- (void)buyCoinCancel:(id)a0;
- (void)onMMFinderLiveRewardGiftPacketSettingViewCellDidChangedSelectionStatus;
- (BOOL)onMMFinderLiveRewardGiftPacketSettingViewCellCheckExceedMaxSelectedItemCount;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)closeAction;
- (void)onDoneButtonClicked:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillBeHidden:(id)a0;
- (void)onBalanceLabelDidTaped:(id)a0;
- (void).cxx_destruct;

@end
