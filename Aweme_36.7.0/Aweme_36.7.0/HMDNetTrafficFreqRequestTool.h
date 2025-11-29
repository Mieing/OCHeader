@class NSMutableDictionary;

@interface HMDNetTrafficFreqRequestTool : NSObject

@property (retain, nonatomic) NSMutableDictionary *highFreqQueue;
@property (retain, nonatomic) NSMutableDictionary *historyQueue;
@property (nonatomic) long long frequencyThreashold;
@property (nonatomic) long long anchorTS;

- (void)usageDictRemoveEarliestValueWithDict:(id)a0 initTimeStamp:(long long)a1 deletEarliest:(BOOL)a2;
- (id)cachedSourceInfoWithKey:(id)a0;
- (void)cacheSourceUsageInfo:(id)a0;
- (id)dumpHighFrequencyUsageWithThreshold:(long long)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;

@end
