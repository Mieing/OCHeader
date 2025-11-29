@class NSString, NSDictionary, NSNumber, MMTableView;

@interface WCPayNewOrderDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate> {
    BOOL _expandDiscount;
    BOOL _expandProducts;
    long long _payScene;
}

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSDictionary *response;
@property (copy, nonatomic) NSString *transId;
@property (retain, nonatomic) NSNumber *payType;
@property (retain, nonatomic) NSString *billId;
@property (nonatomic) BOOL bNotShowedFeedbackBrandContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setupViews;
- (id)tableHeaderViewFromResponse:(id)a0;
- (id)sellerTopViewFromResponse:(id)a0;
- (id)detailViewFromResponse:(id)a0;
- (id)reportBottomViewFromResponse:(id)a0;
- (void)setupDynamicButtonInView:(id)a0;
- (id)parseForDetailFromResponse:(id)a0;
- (void)reloadViewWithResponse:(id)a0;
- (void)sellerAction:(id)a0;
- (void)goToSellerProfile:(id)a0;
- (void)reportOrFeedbackAction:(id)a0;
- (void)complain;
- (void)contact;
- (void)goToReceiver:(id)a0;
- (void)goToPayer:(id)a0;
- (void)resendRemindReceivedMoneyMessage:(id)a0;
- (void)expandDiscount:(id)a0;
- (void)expandProduct:(id)a0;
- (BOOL)isTradeResponse:(id)a0;
- (BOOL)isOfflinePayResponse:(id)a0;
- (BOOL)isTransferResponse:(id)a0;
- (BOOL)isFaceToFaceTransferResponse:(id)a0;
- (BOOL)isIncomeResponse:(id)a0;
- (id)getFeeNameFromResponse:(id)a0;
- (id)getGoodsNameNameFromResponse:(id)a0;
- (id)dateStringFromTimestamp:(long long)a0;
- (id)displayNameWithUsername:(id)a0 trueName:(id)a1;
- (void)goToProfileWithUsername:(id)a0;
- (id)generateBarView:(id)a0;
- (BOOL)isOpenComplain:(id)a0;
- (BOOL)isBusinessPay;
- (id)complainTitle;
- (id)complainUrl;
- (id)helpCenterDic;
- (id)contactTitle;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)simpleHandleError:(id)a0;
- (void)hackForIAP;
- (void).cxx_destruct;

@end
