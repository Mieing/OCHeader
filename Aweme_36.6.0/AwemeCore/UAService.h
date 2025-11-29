@class NSMutableDictionary, NSObject, NSMutableArray;
@protocol UAServiceNetwork, OS_dispatch_semaphore;

@interface UAService : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSMutableDictionary *serviceData;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) UAService *next;
@property (readonly, nonatomic) id<UAServiceNetwork> serviceNetwork;

+ (id)fetchValuesWithKeysMap:(id)a0 fromDataSource:(id)a1;
+ (id)URLWithDomainConfig:(id)a0;
+ (id)requestWithURL:(id)a0 method:(id)a1 data:(id)a2;
+ (BOOL)isPhonescripExpired:(id)a0;
+ (id)phoneScripCacheWithOperatorType:(id)a0;
+ (id)sortedValuesInDictionary:(id)a0 withKeys:(id)a1 joinedByString:(id)a2;
+ (id)interfaceElaspedsWithTimings:(id)a0;
+ (id)phonescripEDWithScripExpiresIn:(id)a0;
+ (id)serviceWithClassName:(id)a0 serviceNetworkClass:(Class)a1;
+ (id)serviceLinkedWithClassNames:(id)a0 serviceNetworkClass:(Class)a1;
+ (id)URLEncodingWithString:(id)a0;
+ (id)jsonFromString:(id)a0 error:(id *)a1;
+ (id)URL;
+ (id)currentTimestamp;
+ (id)dataFromJSON:(id)a0 error:(id *)a1;

- (BOOL)shouldCloseLogReport;
- (void)accessServiceWithData:(id)a0 results:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldAccessServiceGateway;
- (id)serviceRequest;
- (BOOL)isSuccessfulResult;
- (void)mergeResult:(id)a0;
- (BOOL)shouldCloseForKey:(id)a0;
- (BOOL)deivceHasSimCard;
- (BOOL)deviceCellOpened;
- (BOOL)isScripAvailable;
- (BOOL)shouldCloseSDK;
- (BOOL)shoulCloseWaps;
- (void)accessNextService;
- (void)addData:(id)a0 forArrayKey:(id)a1;
- (id)initWithServiceNetworkClass:(Class)a0;
- (void)serviceNetworkDisposedRedirectionResponse:(id)a0;
- (id)dataForKey:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (long long)integerValueForKey:(id)a0;
- (BOOL)isNetworkReachable;
- (void)removeDataForKeys:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (id)allData;
- (void)addResult:(id)a0;
- (id)allResults;

@end
