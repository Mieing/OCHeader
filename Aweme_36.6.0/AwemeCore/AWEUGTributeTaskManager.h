@class NSString, NSMutableDictionary;

@interface AWEUGTributeTaskManager : NSObject <AWEAppAwemeSettingMessage, AWEUGTributeTimingManagerProtocol>

@property (nonatomic) double lastRequestTimestamp;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (nonatomic) BOOL needStartTaskWhenSettingsUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)startTributeTaskOnColdLaunch;
- (void)startTributeTaskIfNeeded;
- (void)tributeTaskReport;
- (void)tributeTaskCreated:(id)a0 withToken:(id)a1;
- (void)tributeTaskRemoveWithToken:(id)a0;
- (void)tributeTaskProgressUpdated:(double)a0 withToken:(id)a1;
- (void)startTributeTask;
- (void)trackAndPostRequestWithHost:(id)a0 path:(id)a1 params:(id)a2 isAuto:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)enableTribute;
- (void)requestTributeTaskToken;
- (double)tributeTokenRequestInterval;
- (void)requestTributeTaskConfWithToken:(id)a0;
- (void)buildAndStartTributeTimingTask:(id)a0 token:(id)a1 reportInterval:(double)a2;
- (id)tributeScenes;
- (id)blockTributeVideoType;
- (id)tributeConfig;
- (void).cxx_destruct;

@end
