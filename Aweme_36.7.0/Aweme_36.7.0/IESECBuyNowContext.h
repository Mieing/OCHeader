@class IESECBuyNowSkeletonModel, NSString, IESECBuyNowViewController, NSMutableDictionary, NSDictionary, IESECNetPerfMetrics, NSMutableArray, IESECBuyNowRequest;

@interface IESECBuyNowContext : NSObject <IESECBuyNowOrderContext>

@property (copy, nonatomic) NSDictionary *apiDic;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSString *bizCode;
@property (retain, nonatomic) NSString *sceneType;
@property (retain, nonatomic) IESECBuyNowRequest *request;
@property (weak, nonatomic) IESECBuyNowViewController *viewController;
@property (copy, nonatomic) NSString *curOpenSchemaRenderNodeKey;
@property (copy, nonatomic) NSString *curOpenSchema;
@property (retain, nonatomic) NSDictionary *tradeEventAsyncParams;
@property (retain, nonatomic) NSDictionary *commonTrackerParams;
@property (retain, nonatomic) NSDictionary *linkage;
@property (retain, nonatomic) NSMutableArray *popupArray;
@property (retain, nonatomic) NSMutableDictionary *popupCollectionViewDic;
@property (retain, nonatomic) IESECBuyNowSkeletonModel *skeletonModel;
@property (nonatomic) BOOL fitPhoneWidth;
@property (nonatomic) unsigned long long pageAvailableState;
@property (nonatomic) BOOL submitStatusFlag;
@property (nonatomic) long long preCheckTimes;
@property (retain, nonatomic) NSDictionary *sdkShowInfo;
@property (nonatomic) BOOL isRefull;
@property (nonatomic) BOOL isOnlyMethodWithCloseEvent;
@property (nonatomic) BOOL unJumpToSuccessPage;
@property (nonatomic) BOOL isZeroBuy;
@property (nonatomic) BOOL isNoPwdCombined;
@property (nonatomic) BOOL useSelfEventRefactor;
@property (nonatomic) BOOL isUltimateBuy;
@property (retain, nonatomic) NSDictionary *ultimateBuyCache;
@property (retain, nonatomic) NSString *ultimateBuyCacheType;
@property (retain, nonatomic) NSString *modelScene;
@property (nonatomic) BOOL isSkuTrackParamsCache;
@property (retain, nonatomic) NSDictionary *skuTrackParams;
@property (retain, nonatomic) NSString *recommendInfoCache;
@property (nonatomic) BOOL openWithSaaS;
@property (nonatomic) unsigned long long slicePackageVersion;
@property (retain, nonatomic) IESECNetPerfMetrics *netPerfMetrics;
@property (copy, nonatomic) NSDictionary *orderSchemaParams;
@property (retain, nonatomic) NSString *preSessionID;
@property (retain, nonatomic) NSDictionary *financeRisk;
@property (nonatomic) BOOL isContinuePay;
@property (retain, nonatomic) NSDictionary *inputParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ultimateBuyPreloadAPI;
+ (double)contentScale;

- (id)pageBTM;
- (id)baseTrackerParams;
- (BOOL)isOnlyPayMethod;
- (id)setupQueryParams;
- (id)prepareQueryParams;
- (double)heightForNavView;
- (unsigned long long)stateViewClosePosition;
- (id)getApiWithApiType:(id)a0;
- (id)netMetrics;
- (void)updateSkuBuyNowBizCode;
- (void)updateSkuBuyNowApi;
- (void)updateSkuBuyNowQueryParamsWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)sessionID;
- (double)fontScale;
- (double)viewScale;

@end
