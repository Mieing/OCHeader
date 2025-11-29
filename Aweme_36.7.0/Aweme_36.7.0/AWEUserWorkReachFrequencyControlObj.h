@class NSString, NSMutableDictionary;

@interface AWEUserWorkReachFrequencyControlObj : NSObject

@property (nonatomic) long long effectiveTime;
@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSMutableDictionary *showCountInfoDict;
@property (retain, nonatomic) NSMutableDictionary *hiddenBlockDict;
@property (nonatomic) long long maxCount;

- (BOOL)displayReachWithKey:(id)a0 showNumThreshold:(id)a1;
- (void)consumeReachFrequencyWithKey:(id)a0;
- (void)clearReachFrequencyWithKey:(id)a0;
- (void)objectSetIgnoreWithKey:(id)a0;
- (BOOL)selectedReachWithKey:(id)a0 selectedNumThreshold:(long long)a1;
- (id)initWithFrequencyCacheKey:(id)a0 effectiveTime:(long long)a1 defaultValue:(long long)a2;
- (void)profileStorageCountInfo;
- (void).cxx_destruct;
- (id)objectWithKey:(id)a0;

@end
