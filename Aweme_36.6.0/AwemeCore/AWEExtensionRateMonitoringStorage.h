@class NSArray;

@interface AWEExtensionRateMonitoringStorage : AWEExtensionStorage

@property (readonly, nonatomic) NSArray *failedArray;
@property (readonly, nonatomic) NSArray *successArray;

+ (id)sharedPushImageSuccessRateStorage;

- (void)addSuccessInfo:(id)a0;
- (void)addErrorInfo:(id)a0;
- (id)failedKey;
- (id)successKey;
- (id)failedMutableArray;
- (id)successMutableArray;
- (void)trackRate:(BOOL)a0 errorInfo:(id)a1;
- (void)reset;

@end
