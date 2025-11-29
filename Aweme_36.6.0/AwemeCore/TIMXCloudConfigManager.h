@class NSArray, MMKV, NSString, TIMXSDKInstance;

@interface TIMXCloudConfigManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) MMKV *mmkk;
@property (nonatomic) BOOL enableUseSettings;
@property (nonatomic) BOOL sharkEnabled;
@property (nonatomic) BOOL autoPollingMsgEnabled;
@property (nonatomic) BOOL triggerPollingMsgEnabled;
@property (nonatomic) long long defaultPollingMsgInterval;
@property (nonatomic) BOOL repairEnabled;
@property (nonatomic) BOOL onlyCheckNotRepair;
@property (nonatomic) long long conversationMsgRepairInterval;
@property (nonatomic) long long conversationMsgRepairStart;
@property (nonatomic) int conversationMsgRepairCount;
@property (nonatomic) float conversationMsgRepairRatio;
@property (nonatomic) BOOL isPreStartPolling;
@property (nonatomic) BOOL p2pEnabled;
@property (nonatomic) long long p2pMinInterval;
@property (nonatomic) BOOL useNewRepairStrategy;
@property (nonatomic) int repairBatchNum;
@property (nonatomic) double strangerOfflinePullInterval;
@property (nonatomic) double generalOfflinePullInterval;
@property (copy) NSArray *forceHttpCmd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (double)getDoubleForKey:(id)a0;
- (long long)getInt64ForKey:(id)a0;
- (void)updateConfigWithDictionary:(id)a0 enableUseSettings:(BOOL)a1;
- (void)updateConfigWithSettings:(id)a0;
- (id)syncCloudConfigPreCheck;
- (void)updateConfigs:(id)a0;
- (void)saveCloudConfig:(id)a0;
- (id)getSaveCloudConfig;
- (void)syncCloudConfigCompletion:(id /* block */)a0;
- (void)setTimeInterval:(long long)a0 forkey:(id)a1;
- (BOOL)needFixForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInt64:(long long)a0 forKey:(id)a1;
- (id)initWithRootObject:(id)a0;

@end
