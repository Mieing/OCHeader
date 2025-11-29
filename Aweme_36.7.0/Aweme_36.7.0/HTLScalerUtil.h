@protocol HTSKVStore, HTSKVStoreProvider;

@interface HTLScalerUtil : NSObject

@property (retain, nonatomic) id<HTSKVStore> todayEntity;
@property (retain, nonatomic) id<HTSKVStore> versionEntity;
@property (retain, nonatomic) id<HTSKVStore> appEntity;
@property (retain, nonatomic) id<HTSKVStoreProvider> kvStoreProvider;

+ (id)defaultUtil;

- (id)todayString;
- (unsigned long long)timesInAppWithKey:(id)a0;
- (unsigned long long)timesInTodayWithKey:(id)a0;
- (unsigned long long)showTimesInAppWithKey:(id)a0;
- (unsigned long long)showTimesInTodayWithKey:(id)a0;
- (BOOL)neverShownInThisAppLifeWithKey:(id)a0;
- (unsigned long long)countForEntity:(id)a0 withKey:(id)a1 defaultIncrease:(BOOL)a2;
- (void).cxx_destruct;
- (void)clear;

@end
