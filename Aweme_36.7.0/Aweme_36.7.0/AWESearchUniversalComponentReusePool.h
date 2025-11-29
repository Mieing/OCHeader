@class AWESearchUniversalComponentReusePoolConfig, NSMutableDictionary;

@interface AWESearchUniversalComponentReusePool : NSObject

@property (retain, nonatomic) AWESearchUniversalComponentReusePoolConfig *config;
@property (retain, nonatomic) NSMutableDictionary *storage;

- (void)p_autoAdjustPoolCountLimit;
- (id)p_fetchStorageForIdentifier:(id)a0;
- (long long)p_fetchCountLimitForIdentifier:(id)a0;
- (unsigned long long)addToPool:(id)a0 withIdentifier:(id)a1;
- (unsigned long long)removeFromPool:(id)a0 withIdentifier:(id)a1;
- (id)fetchFromPoolWithIdentifier:(id)a0;
- (BOOL)checkExistenceWithIdentifier:(id)a0;
- (unsigned long long)countWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)updateWithConfig:(id)a0;
- (id)init;

@end
