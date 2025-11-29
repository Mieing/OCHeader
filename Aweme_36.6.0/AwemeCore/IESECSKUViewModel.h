@class IESECSKUBottomViewModel, IESECSKUDetailContext, IESECSKUModel, IESECSKUContentViewModel, NSString, IESECGoodsSoldOutModel, IESECSKUTopViewModel;

@interface IESECSKUViewModel : NSObject

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (nonatomic) BOOL isRequestInstallmentItermOnAir;
@property (nonatomic) BOOL isInitialShowInstallmentInfo;
@property (nonatomic) BOOL skuModelDefaultSelectEnabled;
@property (retain, nonatomic) IESECSKUTopViewModel *topViewModel;
@property (retain, nonatomic) IESECSKUContentViewModel *contentViewModel;
@property (retain, nonatomic) IESECSKUBottomViewModel *bottomViewModel;
@property (retain, nonatomic) IESECGoodsSoldOutModel *soldOutModel;
@property (readonly, nonatomic) unsigned long long timeSKUCount;
@property (nonatomic) long long tradeType;
@property (readonly, nonatomic) long long tradeBenefitID;
@property (readonly, copy, nonatomic) NSString *tradeBenefitText;

+ (id)mergedExtraParamsFromShowedContents:(id)a0;

- (id)logExtraDict;
- (id)commonMonitorParams;
- (BOOL)isFromLive;
- (void)setupSubViewModels;
- (BOOL)isAddToCart;
- (id)campaignSubType;
- (BOOL)isDepositPresale;
- (void)enableSkuModelDefaultSelectOnce;
- (id)sizeAssistant;
- (id)selectedTotalPrice;
- (id)initWithDetailContext:(id)a0;
- (id)selectedSKUInfo;
- (void)updateSKUWithUpdatedPOIInfo:(id)a0;
- (void)updateSKUWithUpdatedCarAdaptInfo;
- (void)fetchSkuInfoWithCompletion:(id /* block */)a0;
- (void)updateSKUModelFromUpdatedSKUInfo:(id)a0;
- (void)updateInstallmentInfoWithcompletion:(id /* block */)a0;
- (id)generateSelectedSkuInfo;
- (id)generateSkuInfoWithSKULimit:(id)a0;
- (BOOL)isNeedShowSoldOut;
- (void)confirmWithCompeletion:(id /* block */)a0;
- (void)subscribeStockWithCompletion:(id /* block */)a0;
- (void)refreshSoldOutWithCompletion:(id /* block */)a0;
- (id)generateCouponLynxData;
- (id)apiEntranceInfoEncodedJSONStr;
- (void)updateSpecImageTypeWithModel:(id)a0;
- (void)preHandleTradeInWithModel:(id)a0;
- (void)monitorSKUOpenEndWithSKUModel:(id)a0 error:(id)a1;
- (void)preRenderH5ContainerIfNeeded:(id)a0;
- (id)apiEntranceInfoDict;
- (void)betterNativeOrderOperationWithCompeletion:(id /* block */)a0;
- (void)originalOperationWithCompeletion:(id /* block */)a0;
- (void)getAutoCouponsWithCompletion:(id /* block */)a0;
- (id)generateSpecDescsArray;
- (id)generateSpecDesc;
- (id)getSelectCover;
- (void)trackLimitToastWithLimitType:(id)a0;
- (void)updateSKUWithUpdatedCommentInfo:(id)a0;
- (void).cxx_destruct;
- (id)campaignType;

@end
