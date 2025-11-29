@class NSString, HMDThreadMonitorConfig, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface HMDThreadCountMonitorPlugin : NSObject <HMDThreadMonitorPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) HMDThreadMonitorConfig *config;
@property (nonatomic) double nextUploadTime;
@property (copy) NSString *specialThread;
@property (copy, nonatomic) NSDictionary *specialThreadWhiteList;
@property (retain, nonatomic) NSString *lastReportSpecialThreadName;
@property (retain, nonatomic) NSString *warningGCDQueueName;
@property (retain, nonatomic) NSMutableArray *warningGCDQueueEnQueueBTs;
@property (retain, nonatomic) NSMutableDictionary *pthreadCreateBacktraces;
@property (retain, nonatomic) NSMutableDictionary *threadNames;
@property (retain, nonatomic) NSMutableDictionary *gcdThreadQueueTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getKeyThreadBacktraceInBTs:(id)a0;
+ (id)pluginInstance;

- (void)initializeThreadCountMonitorEnv;
- (void)registerThreadCallback;
- (id)getCurrentOverLimitThreadName;
- (void)catchThreadCountExceptionWithSpecialName:(id)a0;
- (void)reportThreadCountExceptionWithKeyThread:(id)a0 currentBTs:(id)a1 filters:(id)a2 custom:(id)a3;
- (id)getCurrentWarningGCDQueueName;
- (void)reportThreadCountExceptionIfNeed;
- (void)setupThreadConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
