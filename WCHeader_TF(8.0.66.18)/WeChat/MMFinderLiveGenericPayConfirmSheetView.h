@class MMLiveRewardGiftCoinButton, MMCPLabel, UIImageView, UIView, MMUIButton, UILabel;

@interface MMFinderLiveGenericPayConfirmSheetView : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate>

@property (nonatomic) double contentHeight;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMLiveRewardGiftCoinButton *coinButton;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) MMCPLabel *wecoinIconLabel;
@property (retain, nonatomic) UILabel *moneyLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) long long price;
@property (nonatomic) BOOL isFromFeed;
@property (nonatomic) BOOL hasClickActionButton;
@property (copy, nonatomic) id /* block */ cancelClickBlock;
@property (copy, nonatomic) id /* block */ actionClickBlock;

- (void)updateContentView;
- (void)updateContentHeight;
- (void)onWecoinBalanceUpdated:(long long)a0;
- (void)setNeedsLayout;
- (void)layoutUI;
- (void)createUI;
- (void)fetchWecoinBalance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)customInit;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)onBuyCoin;
- (void)needBuyCoin;
- (void)buyCoinSuccess:(id)a0;
- (void)buyCoinFail:(id)a0;
- (void)buyCoinCancel:(id)a0;
- (void)pageSheetWillDisappear;
- (void)onClickActionButton;
- (void)customInitActionButton:(id)a0;
- (void)customInitTipLabel:(id)a0;
- (void)customInitMoneyLabel:(id)a0;
- (void).cxx_destruct;

@end
