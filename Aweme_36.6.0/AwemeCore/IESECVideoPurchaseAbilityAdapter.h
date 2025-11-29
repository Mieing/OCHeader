@class NSString, NSArray, IESECGoodsDetailParameters, NSNumber;
@protocol IESECVideoSKUActionDelegate;

@interface IESECVideoPurchaseAbilityAdapter : NSObject

@property (copy, nonatomic) NSString *currentSKUSessionID;
@property (copy, nonatomic) NSString *lastSelectProductID;
@property (copy, nonatomic) NSArray *lastSelectSpecIds;
@property (retain, nonatomic) NSNumber *lastSelectCount;
@property (copy, nonatomic) NSString *lastSKUPanelSourceBTMToken;
@property (copy, nonatomic) NSString *lastSKUPanelSelectComboID;
@property (retain, nonatomic) NSNumber *lastSKUPanelSelectComboNum;
@property (retain, nonatomic) NSNumber *lastSKUPanelSelectInstallment;
@property (copy, nonatomic) NSString *lastSKUPanelSelectPromiseType;
@property (copy, nonatomic) NSString *lastSKUPanelSelectCustomPropertyList;
@property (copy, nonatomic) NSString *lastSKUPanelSelectSalePackageList;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESECGoodsDetailParameters *detailParameters;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) BOOL isGroupBuy;
@property (nonatomic) BOOL containerInHalfMode;
@property (weak, nonatomic) id<IESECVideoSKUActionDelegate> SKUActionHandler;

+ (void)prefetchUltimateBuyPageWithParameters:(id)a0;
+ (BOOL)supportUltimateBuyWithDetailParameters:(id)a0;

- (BOOL)enableIntercept;
- (id)extraLogParams;
- (void)bindAssociatedDetailParameters:(id)a0 sourceBtmToken:(id)a1 actionType:(unsigned long long)a2 isGroupBuy:(BOOL)a3 containerInHalfMode:(BOOL)a4;
- (id)passThroughTrackClient;
- (id)passThroughEntranceInfo;
- (id)detailParametersEntranceInfo;
- (id)submitOrderEntranceInfo;
- (id)buttonStatusForParameter:(id)a0;
- (void)subscribeBuyNowEvent;
- (void)subscribeAddCartEvent;
- (void)subscribeSpecChangeEvent;
- (BOOL)isEquivalentSKUSessionIDWithEventParams:(id)a0;
- (void)cacheSKUInfoValuesWithSKUInfo:(id)a0;
- (void)subscribeSKUPanelEvents;
- (void)unsubscribeSKUPanelEvents;
- (void)resetLastSKUPanelSelectInfo;
- (BOOL)enableInterceptAB;
- (void)hookOriginalActionWithDetailParameters:(id)a0;
- (void)resetHookOriginalActionWithDetailParameters:(id)a0;
- (void)hookOriginalSubmitOrderActionWithDetailParameters:(id)a0;
- (void)hookOriginalOpenSKUActionWithDetailParameters:(id)a0;
- (id)generateSubmitOrderSchemaThenOpen;
- (void)diffSubmitOrderWithOriginalSchema:(id)a0 refactorSchema:(id)a1;
- (id)generateSubmitOrderSchema;
- (BOOL)currentActionSupportUltimateBuy;
- (void)diffMultiSKUUltimateBuyWithSKUShowRequest:(id)a0 refactorSchema:(id)a1;
- (id)generateOpenSKUSchemaThenOpen;
- (void)diffOpenSKUWithSKUShowRequest:(id)a0 refactorSchema:(id)a1;
- (id)generateOpenSKUSchema;
- (id)currentSubmitOrderServerSchema;
- (id)maskBackgroundColorString;
- (id)submitOrderAdInfo;
- (id)currentOpenSKUServerSchema;
- (BOOL)enableRefactorSchemaReport;
- (id)schemaReportLocation;
- (id)currentPurchaseSchema;
- (BOOL)isCurrentSubmitOrderSchemaNative;
- (BOOL)enableRefactorSchemaReportAB;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)initWithScene:(unsigned long long)a0;
- (void)dealloc;

@end
