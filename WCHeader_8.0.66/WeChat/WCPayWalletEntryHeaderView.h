@class UIView, TimeoutNumber, NSString, WCPayControlData, UIImageView, UIButton, MMUILabel, NoticeItem, WCPayNoticeItemView;
@protocol WCPayWalletEntryHeaderViewDelegate;

@interface WCPayWalletEntryHeaderView : UIView <WCPayNoticeBannerDelegate>

@property (weak, nonatomic) id<WCPayWalletEntryHeaderViewDelegate> delegate;
@property (retain, nonatomic) WCPayControlData *data;
@property (retain, nonatomic) NoticeItem *bannerData;
@property (nonatomic) BOOL showBalanceValue;
@property (nonatomic) BOOL hideBalanceValue;
@property (nonatomic) unsigned long long walletEntranceBalanceSwitchState;
@property (nonatomic) unsigned long long wallet_balance;
@property (retain, nonatomic) WCPayNoticeItemView *bannerView;
@property (retain, nonatomic) UIView *brandbkgView;
@property (retain, nonatomic) UIView *offlinePayEntryView;
@property (retain, nonatomic) UIImageView *offlinePayIconImgView;
@property (retain, nonatomic) MMUILabel *offlinePayNameLabel;
@property (retain, nonatomic) UIButton *offlinePayHintBtn;
@property (retain, nonatomic) UIView *balanceEntryView;
@property (retain, nonatomic) UIImageView *balanceIconImgView;
@property (retain, nonatomic) MMUILabel *balanceNameLabel;
@property (retain, nonatomic) UIButton *balanceHintBtn;
@property (retain, nonatomic) TimeoutNumber *timeoutNumber;
@property (retain, nonatomic) MMUILabel *balanceMoneyLabel;
@property (retain, nonatomic) UIImageView *reddotForOfflinePay;
@property (retain, nonatomic) UIImageView *reddotForBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeaderViewHeightWithBannerData:(id)a0;
+ (double)getHeaderContentHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)refreshControlData:(id)a0;
- (id)getControlData;
- (void)refreshBannerData:(id)a0;
- (void)setupTimeoutNumberNoAnimationDelay;
- (void)startTimeoutNumberTimeout;
- (void)updateBalanceAndRefreshView;
- (void)refreshView;
- (void)updateBannerView;
- (void)updateBrandBkgView:(double)a0;
- (void)updateOfflinePayEntryView;
- (void)updateBalanceEntryView;
- (void)setupTimeoutNumber;
- (void)setupBalanceMoneyLabel;
- (void)handleUpdateWalletBalance;
- (double)caculateHeaderEntryItemWidth;
- (double)headerEntryItemHeight;
- (void)banner:(id)a0 clickWithUrl:(id)a1;
- (void)offlinePayEntryBtnClick;
- (void)balanceEntryBtnClick;
- (void).cxx_destruct;

@end
