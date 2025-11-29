@class AWEFantaInteractionCollection, NSString;

@interface AWEFantaInteractionFeatureProvider : NSObject <FantaDataCollectorListener, FantaFeatureProvider, AWEFantaFeatureInfoUpdateProtocol>

@property (retain, nonatomic) AWEFantaInteractionCollection *lastSessionInteractionCollection;
@property (retain, nonatomic) AWEFantaInteractionCollection *currentSessionInteractionCollection;
@property (retain, nonatomic) AWEFantaInteractionCollection *feedInteractionCollection;
@property (nonatomic) long long lastFeedRequestVideoCount;
@property (copy, nonatomic) NSString *launchModeV2;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } feedRequestAndLaunchLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } interactionLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)p_addObserver;
- (id)featureForKey:(id)a0;
- (void)onApplicationWillTerminate:(id)a0;
- (void)onSessionStart:(id)a0;
- (void)recordWithPlayInteraction:(id)a0 referString:(id)a1;
- (void)updateLastFeedRequestVideoCount:(long long)a0;
- (void)handleInteractionFeatureWithType:(unsigned long long)a0 toDict:(id)a1;
- (long long)interactionCountWithLifeCycle:(unsigned long long)a0 playInteraction:(id)a1 referString:(id)a2;
- (void)fantaFeatureUpdateWithKey:(id)a0 info:(id)a1;
- (void)loadPlayInteractionFeatureProvider;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
