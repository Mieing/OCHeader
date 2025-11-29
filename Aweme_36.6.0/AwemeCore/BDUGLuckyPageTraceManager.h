@class NSString, NSArray, NSHashTable, NSMutableArray;

@interface BDUGLuckyPageTraceManager : NSObject <BDUGLuckyRouterIntercepterProtocol>

@property (retain, nonatomic) NSHashTable *pageHasAppeared;
@property (copy, nonatomic) NSString *currentViewStackBottomExtra;
@property (copy, nonatomic) NSString *currentViewStackBottomExtraWithTime;
@property (retain, nonatomic) NSMutableArray *currentViewStack;
@property (nonatomic) unsigned long long maxViewStackReportDepth;
@property (nonatomic) BOOL enablePageTracing;
@property (nonatomic) BOOL enableMonitorCommonParams;
@property (nonatomic) BOOL enableHookViewWillAppear;
@property (nonatomic) BOOL enableHookViewDidDisappear;
@property (nonatomic) double deviceScore;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } eventReportLock;
@property (copy, nonatomic) NSArray *eventsWithAdditionalParams;
@property (copy, nonatomic) NSString *currentViewStackSnapshot;
@property (copy, nonatomic) NSString *currentViewStackSnapshotWithTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (void)__moduleInitialized;
+ (void)__appSettingsUpdated;
+ (id)sharedInstance;

- (void)onContainerWillConstructKitView:(id)a0 extraGlobalProps:(id)a1;
- (id)monitorCommonParams;
- (BOOL)canHandleUrl:(id)a0;
- (id)handleUrl:(id)a0;
- (void)__trackNativePageAppear:(id)a0;
- (void)__trackNativePageDisappear:(id)a0;
- (void)__configureWithSettingsUpdated:(BOOL)a0;
- (id)__extraParamsForEvent:(id)a0;
- (void)__configureWithSettings:(id)a0 updated:(BOOL)a1;
- (void)__pageTraceStartIfNeededWithEntrance:(id)a0;
- (id)__buildExtraParamsWithStackSnapshot:(id)a0 snapshotWithTime:(id)a1;
- (BOOL)__pageTraceActive;
- (BOOL)__isChildVC:(id)a0;
- (void)__trackPageAppeared:(id)a0 name:(id)a1;
- (void)__trackPageClosed:(id)a0;
- (void)__initStackIdentifierWithNewIdentifier:(id)a0 identifierWithTime:(id)a1;
- (void)__updateStackIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
