@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, BDUGLuckyPageReleaseSettingsModel, NSObject;
@protocol OS_dispatch_source;

@interface BDUGLuckyPageReleaseManager : NSObject <BDXBridgeInterceptor, BDUGLuckyPageReleaseManagerProtocol>

@property (retain, nonatomic) BDUGLuckyPageReleaseSettingsModel *settings;
@property (retain, nonatomic) NSMutableDictionary *pageWithStrategies;
@property (retain, nonatomic) BDXBridgeEventSubscriber *feEventSubscriber;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitorTimer;
@property (nonatomic) long long memoryMonitorRefCounter;
@property (nonatomic) double memoryMonitorInterval;
@property (nonatomic) BOOL appInactive;
@property (copy, nonatomic) id /* block */ onPageReleasedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializePageReleaseManager;
+ (void)updatePageReleaseManager;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerOnHide:(id)a0 sourceParam:(id)a1;
- (void)containerDidStartLoading:(id)a0;
- (void)containerDidClose:(id)a0;
- (void)xBridgeWillHandleMethod:(id)a0 container:(id)a1 params:(id)a2;
- (id)lynxContainer;
- (void)settingsDidUpdateWithDictionary:(id)a0;
- (void)__addObservers;
- (id)__containerVCOrContainerWithContainer:(id)a0;
- (id)pathWithContainer:(id)a0;
- (id)viewControllerOfResponder:(id)a0;
- (void)didOtherPageAppearWithFePath:(id)a0 page:(void *)a1;
- (void)didReceiveMemoryWarningNotification:(id)a0;
- (BOOL)shouldTriggerMemoryCondition:(id)a0 writeBackAvailableMemoryMB:(float *)a1;
- (void)didOtherPageOpenWithURLString:(id)a0;
- (BOOL)shouldTriggerMemoryThreshold:(double)a0 withMemoryStatus:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
- (void)didOtherPageAppearWithVCWillAppear:(id)a0;
- (void)didOtherPageAppearWithVCDidAppear:(id)a0;
- (double)intervalOfMemoryMonitor;
- (void)doStartMemoryMonitorWithInterval:(double)a0;
- (void)doStopMemoryMonitor;
- (void)triggeredMemoryMonitorTimer;
- (void)updatePageReleaseManager;
- (BOOL)shouldTriggerMemoryCondition:(id)a0;
- (BOOL)shouldTriggerMemoryCondition:(id)a0 withMemoryStatus:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
- (void)startMemoryMonitor;
- (void)stopMemoryMonitor;
- (void)updateMemoryMonitor;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;

@end
