@class NSString;

@interface AWENetworkThreadPriorityManager : NSObject <NunkiMessage>

@property (nonatomic) BOOL hasResetTTNetIOThreadPriority;
@property (nonatomic) BOOL needResetTTNetIOThreadPriority;
@property (nonatomic) double resetPriority;
@property (copy, nonatomic) NSString *priorityChangeScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENetworkBusinessServiceDOUYINSSAdapterClass;
+ (Class)aAWENetworkBusinessServiceDOUYINJXAdapterClass;
+ (Class)aAWENetworkBusinessServiceDOUYINLGAdapterClass;
+ (id)shareInstance;

- (void)resetTTNetworkThreadPriorityIfNeeded;
- (void)changeTTNetworkThreadPriorityWithScene:(id)a0;
- (void)didReceiveResourceNotification;
- (id)aAWENetworkBusinessServiceDOUYINSSAdapter;
- (void)setUpTTNetChromeIOThreadInitPriorityIfNeeded;
- (BOOL)needJudgeCache;
- (void)setupYAPNetworkThreadPriorityAjustIfNeed;
- (id)aAWENetworkBusinessServiceDOUYINJXAdapter;
- (id)aAWENetworkBusinessServiceDOUYINLGAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
