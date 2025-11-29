@class NSMutableDictionary, NSDictionary, NSString, NSArray;

@interface IESECSkuBuySchemaModel : NSObject <IESECSkuBuySchemaModel>

@property (retain, nonatomic) NSMutableDictionary *originUrlParams;
@property (retain, nonatomic) NSMutableDictionary *megaObjectMut;
@property (retain, nonatomic) NSDictionary *entranceInfo;
@property (retain, nonatomic) NSString *fixEntranceInfo;
@property (retain, nonatomic) NSMutableDictionary *skuLogDataMut;
@property (retain, nonatomic) NSMutableDictionary *timestamps;
@property (retain, nonatomic) NSArray *queryNameBlackList;
@property (retain, nonatomic) NSArray *megaDataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)skuBuyTimestamp;
- (id)getFixEntranceInfoStr;
- (id)getEntranceInfo;
- (id)getSkuLogData;
- (id)getMegaObject;
- (id)getAllQueryParams;
- (void)flushAll;
- (void)replaceOrAppendParam:(id)a0 forKey:(id)a1;
- (id)getQueryParamforKey:(id)a0;
- (void)putValueInSkuLogData:(id)a0 forKey:(id)a1;
- (void)setupBaseParamsWithEntranceInfoScene:(id)a0;
- (void)initParamsWithentranceInfoScene:(id)a0;
- (void)setSkuBuyTimestamp:(id)a0 forKey:(id)a1;
- (void)setFixEntranceInfoStr:(id)a0;
- (id)getSimplifyQueryParams;
- (id)initWithOriginUrl:(id)a0 entranceInfoScene:(id)a1;
- (id)initWithOriginParams:(id)a0 entranceInfoScene:(id)a1;
- (void).cxx_destruct;

@end
