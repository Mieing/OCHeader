@class NSString, NSMutableArray;

@interface AWEFantaSessionFeatureProvider : NSObject <FantaFeatureProvider, AWEFantaFeatureInfoUpdateProtocol>

@property (retain, nonatomic) NSMutableArray *sessionTimestampArray;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } sessionTimestampLock;
@property (nonatomic) double sessionTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onApplicationWillEnterForeground:(id)a0;
- (void)p_addObserver;
- (id)featureForKey:(id)a0;
- (void)fantaFeatureUpdateWithKey:(id)a0 info:(id)a1;
- (void)loadSessionFeatureProvider;
- (void)updateSessionTimestampArray;
- (void)addNewSessionTimestamp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
