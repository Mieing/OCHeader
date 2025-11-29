@class WCPayBuyCoinDetailView, GetWecoinPriceListResponse, NSString;
@protocol WCCoinBuyCoinViewDelegate;

@interface WCCoinBuyCoinView : MMPageSheetBaseViewController <WCPayBuyCoinDetailViewDelegate>

@property (retain, nonatomic) WCPayBuyCoinDetailView *buyCoinDetailView;
@property (weak, nonatomic) id<WCCoinBuyCoinViewDelegate> delegate;
@property (retain, nonatomic) GetWecoinPriceListResponse *priceListsResponse;
@property (nonatomic) unsigned int diffWecoinCount;
@property (nonatomic) BOOL alwaysDarkMode;
@property (nonatomic) unsigned long long panelShowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (long long)overrideUserInterfaceStyle;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)clickWithInfo:(id)a0;
- (void)shouldOpenWeb:(id)a0;
- (void)shouldUpdateHeight;
- (id)getBalanceButton:(long long)a0;
- (BOOL)newUserDiscount:(id)a0;
- (void).cxx_destruct;

@end
