@class UIView, MMWebImageView, MMFinderLiveRewardGiftItem, NSString, UIImageView, MMLiveRewardGiftCoinButton, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUILabel, MMUIButton;

@interface MMFinderLiveFansGroupPayPanel : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate, MMFinderLivePayMgrExt, MMLiveHalfScreenTitleBarViewDelegate>

@property (nonatomic) unsigned long long openScene;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *joinFansGroupGiftItem;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMLiveRewardGiftCoinButton *coinsButton;
@property (retain, nonatomic) MMUILabel *payWecoinLabel;
@property (retain, nonatomic) MMUILabel *payWecoinCountLabel;
@property (retain, nonatomic) UIImageView *payWecoinIcon;
@property (retain, nonatomic) MMWebImageView *giftPreviewView;
@property (retain, nonatomic) MMUILabel *fansGroupLabel;
@property (retain, nonatomic) MMUIButton *joinFansGroupButton;
@property (nonatomic) long long balance;
@property (nonatomic) BOOL wecoinBalanceUpdated;
@property (nonatomic) BOOL fetchWecoinBalanceFinished;
@property (copy, nonatomic) id /* block */ payCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 giftItem:(id)a1 openScene:(unsigned long long)a2;
- (void)initView;
- (BOOL)shouldAdaptToDarkLight;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initData;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)a0;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0;
- (id)finderLiveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleBarView;
- (void)layPayWecoinInfo;
- (void)layoutFansContentView;
- (void)layoutJoinButton;
- (double)contentWidth;
- (double)contentHeight;
- (void)onJoinFanClubWithError:(id)a0 comboId:(id)a1 taskId:(id)a2;
- (void)onCoinButtonClicked;
- (void)onJoinFansGroupButtonClicked;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)joinFanClub;
- (void)onNeedBuyCoinWithCurrentBalance:(long long)a0;
- (void)buyCoinSuccess:(id)a0;
- (void)buyCoinFail:(id)a0;
- (void)buyCoinCancel:(id)a0;
- (void)reportForPanelExpose;
- (void)reportForPayButtonClick;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
