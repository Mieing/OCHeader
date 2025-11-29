@class NSArray, NSString, TTTrackerEventListConfig, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTTrackerConfigFetcher : NSObject {
    BOOL action_logsettings_lock;
    BOOL action_eventfilter_lock;
}

@property (retain) NSArray *immediateEventList;
@property (copy, nonatomic) NSString *immediateEventListPath;
@property (nonatomic) long long fetchInterval;
@property (retain) TTTrackerEventListConfig *eventListConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (copy, nonatomic) NSString *eventListPath;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *iv;
@property (nonatomic) BOOL needUpdateConfig;
@property (nonatomic) BOOL eventFilterEnabled;
@property (nonatomic) BOOL isUpdatingConfig;
@property (nonatomic) long long requestStartTime;
@property (nonatomic) long long defaultBatchInterval;
@property (nonatomic) long long batchInterval;
@property BOOL ignoreEventPriority;
@property (retain) NSDictionary *optionsExtraParamters;

+ (id)sharedInstance;

- (void)requestForBinaryWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 requestSerializer:(Class)a4 responseSerializer:(Class)a5 autoResume:(BOOL)a6 callback:(id /* block */)a7;
- (void)turnOffEventFilter;
- (void)turnOnEventFilter;
- (void)checkIntervalAndStartFetch;
- (void)loadParamsBlockConfigs;
- (void)loadBlockList;
- (id)paramsBlockConfigPath;
- (id)customHeaderWhiteListPath;
- (void)startFetchTrackerConfiguration;
- (void)traceFetchResultState:(id)a0;
- (void)configureTracker:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
