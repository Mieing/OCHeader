@class NSArray, AWECityModel, NSMutableDictionary, NSString, NSMutableArray;

@interface AWECityManager : NSObject <AWECityManagerProtocol>

@property (nonatomic) long long pageType;
@property (nonatomic) long long channelPageType;
@property (retain, nonatomic) AWECityModel *currentLocatedCity;
@property (copy, nonatomic) NSArray *hotCities;
@property (copy, nonatomic) NSArray *serverHistoryCities;
@property (nonatomic) BOOL useServerHistoryCities;
@property (copy, nonatomic) NSArray *allCities;
@property (retain, nonatomic) NSMutableDictionary *cityCache;
@property (retain, nonatomic) NSMutableArray *userCache;
@property (retain, nonatomic) AWECityModel *savedLocatedCity;
@property (nonatomic) BOOL isLocated;
@property (retain, nonatomic) AWECityModel *savedRoamCity;
@property (nonatomic) long long historyCitiesMaxCount;
@property (nonatomic) BOOL hasCityCache;
@property (retain, nonatomic) AWECityModel *country;
@property (readonly, nonatomic) AWECityModel *currentSelectedCity;
@property (readonly, copy, nonatomic) NSArray *historyCities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPageType:(long long)a0;
- (id)p_currentUserID;
- (BOOL)currentSelectedCityLocated;
- (void)setCurrentSelectedCity:(id)a0 isLocated:(BOOL)a1;
- (BOOL)channelPageScene;
- (void)configHistoryCitiesMaxCount:(long long)a0;
- (void)refreshWithparams:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasCityCacheListFile;
- (id)savedLocatedCityKey;
- (id)citySelectHistoryKey;
- (id)userHistoryKey;
- (id)sortedAllCities:(id)a0;
- (id)cityListFile;
- (void)cacheFromName:(id)a0 complete:(id /* block */)a1;
- (void)cacheResponse:(id)a0 forName:(id)a1;
- (void)requestCityListForUrl:(id)a0 params:(id)a1 modelClass:(Class)a2 complete:(id /* block */)a3;
- (void)p_LRUAdjustForCity:(id)a0;
- (void)p_LRUAdjustForUser;
- (BOOL)addCityToHistory:(id)a0;
- (id)storageKeyPreFix;
- (void).cxx_destruct;

@end
