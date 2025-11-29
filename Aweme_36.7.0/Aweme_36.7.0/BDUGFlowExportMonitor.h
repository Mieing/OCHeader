@interface BDUGFlowExportMonitor : NSObject

@property (nonatomic) long long backStatus;
@property (nonatomic) unsigned long long launchType;
@property (nonatomic) unsigned long long warmStartStatus;

+ (BOOL)isColdLaunch;
+ (id)sharedInstance;

- (void)reportOutWithUrl:(id)a0 authInfo:(id)a1 status:(long long)a2 resultMessage:(id)a3 isForeground:(BOOL)a4;
- (id)generateRouteOutSession;
- (void)reportBackIfNeededIsCold:(BOOL)a0;
- (id)buildOutParams:(id)a0 authInfo:(id)a1 status:(long long)a2 resultMessage:(id)a3 isForeground:(BOOL)a4 fromScene:(id)a5 leaveType:(unsigned long long)a6 extraInfo:(id)a7;
- (id)targetAppForURL:(id)a0 leaveType:(unsigned long long)a1;
- (id)mapLeaveType:(unsigned long long)a0;
- (void)reportOutWithType:(unsigned long long)a0 resultMessage:(id)a1 extraInfo:(id)a2;
- (void)appWillResignActive:(id)a0;
- (void)setup;
- (void)appDidBecomeActive:(id)a0;
- (void)appWillEnterForeground:(id)a0;

@end
