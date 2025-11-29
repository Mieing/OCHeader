@class NSMutableDictionary, WCOPackageItem, NSString, WCOutGetPackageProductListCgi, WCOutPurchasePackageCgi, MMTableView;

@interface WCOutPackageViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCOutPackageProductListDelegate, WCOutPurchasePackageDelegate, MMTipsViewControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *WCOPkgItemsDict;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCOutGetPackageProductListCgi *getproductCgi;
@property (retain, nonatomic) WCOutPurchasePackageCgi *purchaseCgi;
@property (retain, nonatomic) WCOPackageItem *item_buy;
@property (nonatomic) int purchaseRetCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidPop:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)configTableWithoutData;
- (void)configData;
- (id)getPackageByIndex:(unsigned long long)a0;
- (void)initTableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)PackageProductListResponse:(int)a0 Request:(id)a1 Response:(id)a2;
- (void)PurchasePackageResponse:(int)a0 Request:(id)a1 Response:(id)a2;
- (void)onClickBuy:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)showNOPackageLabel;
- (double)getCellContentHeightBtIndex:(id)a0;
- (void).cxx_destruct;

@end
