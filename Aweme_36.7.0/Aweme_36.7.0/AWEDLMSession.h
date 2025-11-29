@class NSObject, NSString, AWEDeepLinkMonitor, NSError, NSMutableArray, AWEDLMSessionExtInfo;
@protocol OS_dispatch_source;

@interface AWEDLMSession : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) double timeStamp;
@property (nonatomic) double costTime;
@property (nonatomic) BOOL isForeground;
@property (retain, nonatomic) NSMutableArray *stagesStack;
@property (retain, nonatomic) AWEDLMSessionExtInfo *extInfo;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *launchMode;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (readonly, copy, nonatomic) NSString *errorStageName;
@property (weak, nonatomic) AWEDeepLinkMonitor *parent;
@property (nonatomic) BOOL needReportImediately;

- (id)originURLString;
- (id)addStage:(id)a0 timeStamp:(double)a1 pageName:(id)a2;
- (id)reportWithError:(id)a0;
- (id)buildParams;
- (BOOL)isFromOutsideRoute;
- (BOOL)needReportInternalRoute;
- (id)buildURLParams:(id)a0;
- (id)mapLaunchMode:(unsigned long long)a0;
- (id)mapFromScene:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 openURL:(id)a1;
- (void)removeUnAllowedParams;
- (void)reportCpsTrackIfNeed;
- (id)mapToScene:(unsigned long long)a0;
- (void)finish:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)discard;
- (void)saveToDisk;
- (id)addStage:(id)a0;
- (id)modify:(id /* block */)a0;
- (void)clean;

@end
