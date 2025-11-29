@class NSCache, NSDictionary;

@interface BDCertConditionFactory : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (copy, nonatomic) NSDictionary *conditionClassMap;

+ (id)conditionWithModel:(id)a0;
+ (id)sharedInstance;

- (id)conditionWithModel:(id)a0;
- (void)initCache;
- (void)initClassMap;
- (void).cxx_destruct;
- (id)init;

@end
