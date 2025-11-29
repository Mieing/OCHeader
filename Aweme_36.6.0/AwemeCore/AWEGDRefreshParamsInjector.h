@class NSString, NSDictionary;

@interface AWEGDRefreshParamsInjector : NSObject

@property (copy, nonatomic) NSString *domainKey;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *componentID;

- (void)subscribeLifeStorageChangeWithDomainAndComponentID;
- (id)subscribeKey;
- (void)unsubscribeLifeStorageChange;
- (void)updateStatusByNewValue:(id)a0;
- (id)initWithDomainKey:(id)a0 componentId:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
