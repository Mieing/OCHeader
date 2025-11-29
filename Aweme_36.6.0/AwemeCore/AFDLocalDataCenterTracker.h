@class NSDictionary;

@interface AFDLocalDataCenterTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackSampleConfig;

+ (void)trackDataErrorWithType:(id)a0 scene:(id)a1 method:(id)a2;
+ (void)trackTableValidTime:(id)a0 initStage:(long long)a1 afterSync:(BOOL)a2 loginDate:(id)a3;
+ (void)trackDbInfo:(unsigned long long)a0;
+ (void)trackDbGlobalError:(id)a0 dbName:(id)a1;
+ (void)trackDbInitWithBuilder:(id)a0;
+ (BOOL)enableTrackWithEvent:(id)a0;
+ (id)trackSampleConfig;
+ (void)trackNetworkWithBuilder:(id)a0;
+ (id)sharedInstance;

- (void)trackDbReadOperationWithBuilder:(id)a0;
- (void)trackDbWriteOperationWithBuilder:(id)a0;
- (void)trackDbMultiReadOperationWithBuilder:(id)a0;
- (void)trackDbOperationWithBuilder:(id)a0 event:(id)a1;
- (void).cxx_destruct;

@end
