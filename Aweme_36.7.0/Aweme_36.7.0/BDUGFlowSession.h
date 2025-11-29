@class NSObject, NSString, BDUGFlowSessionExtInfo, NSError, NSMutableArray, BDUGFlowMonitor;
@protocol OS_dispatch_source;

@interface BDUGFlowSession : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) double timeStamp;
@property (nonatomic) double costTime;
@property (nonatomic) BOOL isForeground;
@property (retain, nonatomic) NSMutableArray *stagesStack;
@property (retain, nonatomic) BDUGFlowSessionExtInfo *extInfo;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) BDUGFlowMonitor *parentMonitor;
@property (readonly, copy, nonatomic) NSString *errorStageName;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;

- (id)addStage:(id)a0 timeStamp:(double)a1 pageName:(id)a2;
- (id)reportWithError:(id)a0;
- (id)buildParams;
- (BOOL)isFromOutsideRoute;
- (BOOL)needReportInternalRoute;
- (id)buildURLParams:(id)a0;
- (id)mapLaunchMode:(unsigned long long)a0;
- (id)mapFromScene:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 openURL:(id)a1;
- (id)addWorkflowStage:(id)a0;
- (id)addCustomStage:(id)a0;
- (void)removeUnAllowedParams;
- (void)finish:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (void)encodeWithCoder:(id)a0;
- (long long)currentApplicationState;
- (id)initWithCoder:(id)a0;
- (void)discard;
- (void)saveToDisk;
- (BOOL)isAppInForeground;
- (id)addStage:(id)a0;
- (id)modify:(id /* block */)a0;
- (void)clean;

@end
