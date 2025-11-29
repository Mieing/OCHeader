@class NSString, NSHashTable;

@interface AWEFeedTableViewPlayTimeNotifyCenter : NSObject <AWEFeedTableViewNotifyPlayTimeProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL optDispatchPerformance;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (void)notifyPlayTimeIfNeededWithCurrentAweme:(id)a0 playTime:(double)a1 totalTime:(double)a2;
- (void)notifyObserversWithModel:(id)a0 playTime:(double)a1 totalTime:(double)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
