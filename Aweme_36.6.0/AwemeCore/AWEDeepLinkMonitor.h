@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDeepLinkMonitor : NSObject <AWERouterDelegate, NSCoding>

@property (class, readonly, nonatomic) double appLaunchTime;
@property (class, readonly, nonatomic) BOOL isColdLaunch;
@property (class, nonatomic) BOOL isColdLaunchAndShortCut;
@property (class, nonatomic) BOOL isColdLaunchAndReceivedPush;
@property (class, nonatomic) BOOL isColdLaunchAndReceivedOpenURL;

@property (nonatomic) BOOL isColdLaunchFromShortCut;
@property (retain, nonatomic) NSMutableDictionary *sessionsMap;
@property (retain, nonatomic) NSMutableDictionary *sessionStash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSDictionary *currentMonitorParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportMonitorResultWithStayTime:(long long)a0;
+ (id)sessionForURL:(id)a0 needCreate:(BOOL)a1 fuzzy:(BOOL)a2;
+ (void)stashSession:(id)a0 forScene:(id)a1;
+ (id)unStashSession:(id)a0;
+ (void)aliasSession:(id)a0 aliasURLString:(id)a1;
+ (BOOL)needCache;
+ (void)_reportOfflineSessionsIfNeeded:(id)a0;
+ (void)reportOfflineSessionsIfNeeded;
+ (void)saveToDiskIfNeeded:(id)a0;
+ (void)clean:(id)a0;
+ (void)_aweLazyRegisterLoad;
+ (void)reportMonitorResult;
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
- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appWillResignActive;

@end
