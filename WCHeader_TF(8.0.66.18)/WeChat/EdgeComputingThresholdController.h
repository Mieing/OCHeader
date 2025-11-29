@class NSMutableDictionary;

@interface EdgeComputingThresholdController : NSObject {
    NSMutableDictionary *receiveDataThresholdRecords;
}

- (id)init;
- (BOOL)checkDataReceiveFrequency:(id)a0;
- (unsigned long long)getTotalCacheDataCountLimit;
- (unsigned long long)getCacheDataCountLimit;
- (unsigned long long)getCacheDataTimeLimit;
- (void).cxx_destruct;

@end
