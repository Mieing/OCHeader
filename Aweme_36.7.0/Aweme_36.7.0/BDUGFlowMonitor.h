@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGFlowMonitor : NSObject <NSCoding>

@property (nonatomic) BOOL isColdLaunchFromShortCut;
@property (retain, nonatomic) NSMutableDictionary *sessionsMap;
@property (retain, nonatomic) NSMutableDictionary *sessionStash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) double startTime;

+ (void)reportUserNormalAction;
+ (void)reportMonitorResultWithStayTime:(long long)a0;
+ (id)sessionForURL:(id)a0 needCreate:(BOOL)a1 fuzzy:(BOOL)a2;
+ (void)stashSession:(id)a0 forScene:(id)a1;
+ (id)unStashSession:(id)a0;
+ (void)aliasSession:(id)a0 aliasURLString:(id)a1;
+ (BOOL)needCache;
+ (void)_reportOfflineSessionsIfNeeded:(id)a0;
+ (id)createSessionForURL:(id)a0;
+ (id)getSessionForURL:(id)a0;
+ (id)getFuzzySessionForURL:(id)a0;
+ (void)reportOfflineSessionsIfNeeded;
+ (void)saveToDiskIfNeeded:(id)a0;
+ (void)clean:(id)a0;
+ (id)sharedInstance;
+ (BOOL)enabled;
+ (double)timeout;

- (id)sessionForURL:(id)a0 needCreate:(BOOL)a1 fuzzy:(BOOL)a2;
- (void)stashSession:(id)a0 forScene:(id)a1;
- (id)unStashSession:(id)a0;
- (void)aliasSession:(id)a0 aliasURLString:(id)a1;
- (id)sessionIDForURL:(id)a0;
- (void)startTimerForSession:(id)a0;
- (void)timeoutForSession:(id)a0;
- (void)recordMonitorResultWhenAppStart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appWillResignActive;

@end
