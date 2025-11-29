@class IESECWinContext, NSString;

@interface IESECWinTabApi : NSObject

@property (weak, nonatomic) IESECWinContext *context;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *ec_extra;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (copy, nonatomic) NSString *clickedGoodsID;
@property (copy, nonatomic) NSString *commonPassThrough;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) long long subTab;
@property (nonatomic) long long cursor;
@property (nonatomic) long long goodsType;
@property (nonatomic) long long sortType;
@property (nonatomic) long long sort;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *filterType;
@property (copy, nonatomic) NSString *categoryIDs;
@property (copy, nonatomic) NSString *subCategoryIDs;
@property (nonatomic) BOOL isFirstEnter;
@property (nonatomic) long long upgradeVersion;
@property (copy, nonatomic) NSString *forceInsertInfo;
@property (copy, nonatomic) NSString *nextApi;
@property (copy, nonatomic) NSString *selectedFilterID;
@property (copy, nonatomic) NSString *api;
@property (retain, nonatomic) Class modelClass;

- (void)fetchWindowTabIsPrefetch:(BOOL)a0 withCompletion:(id /* block */)a1 metricsBlock:(id /* block */)a2;
- (void)trackEcWindowTabResponse:(id)a0 withRequestParams:(id)a1 response:(id)a2 error:(id)a3;
- (void).cxx_destruct;

@end
