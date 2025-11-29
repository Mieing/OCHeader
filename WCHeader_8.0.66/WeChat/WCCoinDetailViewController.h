@class GetWecoinPageInfoResponse, NSString, UIView, WCCoinNewUserTipsView, KindaUIScrollView;

@interface WCCoinDetailViewController : MMUIViewController <ILinkEventExt, WCCoinGetWecoinPageInfoCgiDelegate, WCCoinBuyCoinLogicDelegate, WCCoinFetchMoneyViewControllerDelegate, ServiceAuthExt>

@property (retain, nonatomic) KindaUIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) GetWecoinPageInfoResponse *pageInfoResponse;
@property (retain, nonatomic) WCCoinNewUserTipsView *tipsView;
@property (nonatomic) BOOL didBuyCoin;
@property (nonatomic) BOOL directlyJumpDetailPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)refresh;
- (void)layoutContentView;
- (void)layoutBannerView;
- (void)layoutTopView;
- (void)layoutProfitView;
- (void)layoutSubscriptionListEntrance;
- (void)layoutBottomView;
- (void)buyCoin;
- (void)clickProfit;
- (void)onClickRightItem;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)clickCoinBalance;
- (void)clickBanner;
- (void)clickSubscriptionListEntrance;
- (void)getPageInfo;
- (void)showNewUserTips;
- (void)didFetchMoneySuccess:(id)a0;
- (void)getWecoinPageInfoCgi:(id)a0 didGetResponse:(id)a1;
- (void)getWecoinPageInfoCgi:(id)a0 didFailWithError:(id)a1;
- (void)buyCoinSuccess:(id)a0;
- (void)buyCoinFail:(id)a0;
- (void)buyCoinCancel:(id)a0;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onCloseService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
