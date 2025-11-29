@protocol LiveIOStrategySDKObserver;

@interface TTLiveIOManager : NSObject {
    void *mLogCallbackHandle;
}

@property BOOL isRunning;
@property (weak, nonatomic) id<LiveIOStrategySDKObserver> strategySDKObserver;

+ (id)sharedInstance;

- (void)setConfig:(int)a0 withConf:(id)a1;
- (void)prepare:(id)a0 withVpaas:(id)a1;
- (void)notifyFinish:(id)a0 withInfo:(id)a1;
- (void)loadDemuxer:(id)a0 withVpaas:(id)a1;
- (void)unloadDemuxer:(id)a0 withInfo:(id)a1;
- (void)setIntValue:(int)a0 withValue:(int)a1;
- (void)setInt64ValueByStrKey:(int)a0 withKey:(id)a1 withValue:(long long)a2;
- (void)setInt64Value:(int)a0 withValue:(long long)a1;
- (void)setStringValueByStr:(int)a0 withKey:(id)a1 withValue:(id)a2;
- (void)setStringValue:(int)a0 withValue:(id)a1;
- (void)setValueVoidPTR:(void *)a0 forKey:(int)a1;
- (long long)getLongValueByStr:(id)a0 withKey:(int)a1;
- (long long)getLongValue:(int)a0;
- (id)getStringValueByStr:(id)a0 withKey:(int)a1;
- (id)getStringValue:(int)a0;
- (id)notifyLiveStrategySDK:(long long)a0 info:(id)a1;
- (id)getStringValueByStr2:(id)a0 withKey:(int)a1 strkey2:(id)a2;
- (void)preConnect:(id)a0 withParams:(id)a1;
- (void)set_logger_callback_handle:(void *)a0;
- (void)setLiveIOStrategySDKObserver:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (long long)start;

@end
