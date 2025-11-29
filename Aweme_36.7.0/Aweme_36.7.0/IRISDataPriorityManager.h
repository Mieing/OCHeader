@class IRISPriorityFilterPlugin, NSArray, IRISDataUploader, NSDictionary, IRISDataMechanismManager, IRISExternalHandler, NSObject;
@protocol OS_dispatch_queue, IRISContext;

@interface IRISDataPriorityManager : NSObject {
    NSObject<OS_dispatch_queue> *executeQueue;
}

@property (retain, nonatomic) IRISDataMechanismManager *mechanismManager;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<IRISContext> context;
@property (retain, nonatomic) NSArray *uploaders;
@property (retain, nonatomic) IRISDataUploader *defaultUploader;
@property (retain) IRISPriorityFilterPlugin *filter;
@property (retain, nonatomic) NSDictionary *priorityListConfig;
@property (readonly) unsigned long long priorityVersion;
@property (readonly) NSArray *priorityConfigIDs;
@property (retain, nonatomic) NSDictionary *backoffListConfig;
@property (readonly) unsigned long long backoffVersion;
@property (readonly) NSArray *backoffConfigIDs;
@property (retain, nonatomic) NSDictionary *dataMechanismConfig;
@property (readonly) unsigned long long dataMechanismVersion;
@property (readonly) NSArray *dataMechanismConfigIDs;
@property (readonly) NSDictionary *configRAW;
@property (retain, nonatomic) IRISExternalHandler *external;

- (void)removeAllData;
- (void)onRealtimeSettingsDidUpdate:(id)a0;
- (void)onTimerTick;
- (id)priorityListPath;
- (BOOL)_applyPriorityListConfiguration:(id)a0;
- (id)backoffListPath;
- (void)_applyBackoffListConfiguration:(id)a0;
- (id)dataMechanismConfigPath;
- (void)_applyDataMechanismConfiguration:(id)a0;
- (id)uniqueKeyForConfig:(id)a0;
- (id)generateUploader;
- (void)applyPriorityConfiguration:(id)a0 forUploader:(id)a1;
- (id)filterUploaderUsingOptiosn:(id)a0;
- (void)triggerUpload:(id)a0;
- (id)executionQueue;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)suspend;
- (void)commonInit;
- (void)resume;
- (void)removeExpiredData;

@end
