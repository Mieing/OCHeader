@class NSArray, NSMutableDictionary, NSMutableArray;

@interface TMNetworkContentDetectHandler : NSObject

@property (nonatomic) unsigned long long sampleRate;
@property (copy, nonatomic) NSArray *privacyDataCacheRanges;
@property (nonatomic) unsigned long long frequencyThreshold;
@property (copy, nonatomic) NSArray *privacyFrequencyDataTypeRanges;
@property (copy, nonatomic) NSArray *customizedItemDetectRanges;
@property (copy, nonatomic) NSArray *frequencyDetectBlackList;
@property (retain, nonatomic) NSMutableDictionary *itemIDRecord;
@property (retain, nonatomic) NSMutableArray *itemAccessHistory;
@property (retain, nonatomic) NSMutableDictionary *itemAccessNum;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (id)cacheParams;
- (void)detectWithItem:(id)a0;
- (BOOL)isFrequencyDetectRunning;
- (id)netParamsFromItem:(id)a0;
- (id)keyPathsFromDataType:(id)a0 cacheItems:(id)a1 detectItem:(id)a2 locate:(id)a3 frequencyInfo:(id *)a4;
- (void)reportProblemWithRuleKey:(id)a0 dataType:(id)a1 keyPaths:(id)a2 frequencyInfo:(id)a3 detectSampleRate:(unsigned long long)a4 detectionItem:(id)a5;
- (BOOL)enableFrequencyDetectWithDataType:(id)a0 detectItem:(id)a1;
- (long long)frequencyWithDataType:(id)a0 detectItem:(id)a1 atTime:(double)a2;
- (id)keyPathInfoWithDetectItem:(id)a0 locate:(id)a1 cacheItem:(id)a2;
- (void).cxx_destruct;

@end
