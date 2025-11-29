@class NSArray, NSDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TTrackerPriorityUploader : NSObject <BDTrackerPriorityTimer> {
    NSObject<OS_dispatch_queue> *executionQueue;
    NSMutableArray *uploadTimes;
    int frequencyAmplification;
    int consecutive_success;
}

@property (nonatomic) NSArray *allPriority;
@property (nonatomic) long long priority;
@property (nonatomic) long long intervalMultiple;
@property (nonatomic) long long baseInterval;
@property (nonatomic) long long maxRequestFrequency;
@property (nonatomic) long long backoffRatio;
@property BOOL disableEnterBackgroundTrigger;
@property BOOL disableEnterForegroundTrigger;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDictionary *paramKeys;
@property (copy, nonatomic) NSDictionary *paramValues;
@property (copy, nonatomic) NSString *uploadHost;
@property (copy, nonatomic) NSString *uploadPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)realtimeUploader;
+ (id)uploaderWithSettings:(id)a0;
+ (id)defaultBatchUploader;

- (double)timerInterval;
- (id)_requestForURL:(id)a0 postParams:(id)a1;
- (void)onPriorityTimer:(id)a0;
- (void)triggerUpload:(BOOL)a0 source:(long long)a1;
- (BOOL)hitEvent:(id)a0 parameters:(id)a1;
- (void)uploadIfNeed:(BOOL)a0 source:(long long)a1;
- (BOOL)realtimePriority;
- (void)upload:(id)a0 source:(long long)a1;
- (void)downgradeIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)defaultPriority;

@end
