@class AWESSCollegeMainEntranceModel, NSTimer, NSHashTable, AWEStorage, NSString;

@interface AWESSCollegeMainEntranceManager : NSObject <AWESearchCollegeMainEntranceManagerProtocol>

@property (class, readonly, nonatomic) AWESSCollegeMainEntranceManager *sharedInstance;

@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) AWESSCollegeMainEntranceModel *mainEntranceModel;
@property (nonatomic) BOOL needsDisplaySugMainEntrance;
@property (retain, nonatomic) NSHashTable *homeMainEntranceObservers;
@property (retain, nonatomic) NSHashTable *sugMainEntranceObservers;
@property (nonatomic) long long collegeIntentQueryCount;
@property (retain, nonatomic) NSTimer *mainEntranceExpireTimer;
@property (readonly, nonatomic) BOOL needsDisplayHomeMainEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCollegeIntentQueryCount:(long long)a0;
- (void)addSugMainEntranceObserver:(id)a0;
- (void)addHomeMainEntranceObserver:(id)a0;
- (void)updateMainEntranceVisibility;
- (void)invalidateMainEntranceCache;
- (double)timeIntervalWithExpireTimestamp:(double)a0;
- (void)mainEntranceExpireTimerFired:(id)a0;
- (void)homeMainEntranceDidUpdate;
- (void)sugMainEntranceDidUpdate;
- (void)updateMainEntranceWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
