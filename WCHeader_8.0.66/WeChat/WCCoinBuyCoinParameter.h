@class NSString, GetWecoinPriceListResponse;
@protocol MMFinderLivePayMgrExt, MMPageSheetProvider;

@interface WCCoinBuyCoinParameter : MMObject

@property (weak, nonatomic) id<MMFinderLivePayMgrExt> payLogicOberver;
@property (nonatomic) BOOL panelAlwaysDarkMode;
@property (weak, nonatomic) id<MMPageSheetProvider> pageSheetProvider;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long panelShowType;
@property (copy, nonatomic) NSString *directBuyProductId;
@property (retain, nonatomic) GetWecoinPriceListResponse *priceListResponse;
@property (nonatomic) unsigned int diffWecoinCount;
@property (retain, nonatomic) id customData;
@property (nonatomic) BOOL shouldStartNewSession;

- (id)init;
- (void).cxx_destruct;

@end
