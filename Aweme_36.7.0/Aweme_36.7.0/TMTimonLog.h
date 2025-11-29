@class NSObject, NSArray, NSTimer, NSString, NSDictionary, NSMutableArray, NSCache;
@protocol OS_dispatch_queue;

@interface TMTimonLog : NSObject

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *downgradeEvent;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL enableTimer;
@property (nonatomic) unsigned long long timerInterval;
@property (nonatomic) BOOL uploadRuleEngineParams;
@property (retain, nonatomic) NSTimer *appLogTimer;
@property (nonatomic) unsigned long long currentDataInfoSize;
@property (nonatomic) BOOL isHotLaunchFlag;
@property (copy, nonatomic) NSString *currentPage;
@property (nonatomic) BOOL enableAutoReadPasteboard;
@property (nonatomic) BOOL enableReadExifLocation;
@property (nonatomic) BOOL hasAgreedPrivacy;
@property (nonatomic) BOOL isBasicMode;
@property (nonatomic) BOOL isInSplash;
@property (nonatomic) BOOL isSilentMode;
@property (nonatomic) BOOL isTeenMode;
@property (nonatomic) BOOL isFirstLog;
@property (copy, nonatomic) NSDictionary *appInfo;
@property (retain, nonatomic) NSMutableArray *contextInfo;
@property (retain, nonatomic) NSMutableArray *dataInfo;
@property (retain, nonatomic) NSCache *dupFeatures;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timonLogQueue;

+ (void)registerColdLaunchTime;
+ (id)sharedInstance;

- (id)getCurrentPage;
- (void)__exectuteOnMainThread:(id /* block */)a0;
- (void)appLogWithTimer;
- (void)updateContextInfo;
- (id)getRuleEngineContext;
- (void)appLog:(id)a0;
- (BOOL)getEnableAutoReadPasteboard;
- (BOOL)getEnableReadExifLocation;
- (BOOL)getHasAgreedPrivacy;
- (BOOL)getIsBasicMode;
- (BOOL)getIsInSplash;
- (BOOL)getIsSilentMode;
- (BOOL)getIsTeenMode;
- (void)addContextInfoKey:(id)a0 value:(id)a1;
- (void)logWithEventName:(id)a0 params:(id)a1 duplicationFeature:(id /* block */)a2 shouldRetain:(BOOL)a3;
- (void)willEnterForeground;
- (id)tracker;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (void)dealloc;
- (void)willTerminate;

@end
