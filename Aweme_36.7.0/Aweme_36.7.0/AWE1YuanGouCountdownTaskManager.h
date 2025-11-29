@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWE1YuanGouCountdownTaskManager : NSObject <AWEWatchVideoTaskObserver>

@property (retain, nonatomic) NSMutableDictionary *allTasks;
@property (retain, nonatomic) NSMutableSet *allFinishedTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMain1YuanGouCommonAdapterClass;
+ (id)sharedInstance;

- (void)removeInvalidTasks;
- (void)reportTask:(id)a0 retryCount:(unsigned long long)a1;
- (id)aAWEMain1YuanGouCommonAdapter;
- (BOOL)forbidCountdownForTask:(id)a0 playingAweme:(id)a1;
- (BOOL)forbidSamePlayCountdown:(id)a0;
- (void)didFinishTask:(id)a0;
- (void)loopPlayForTask:(id)a0 aweme:(id)a1;
- (void)countdownChangedForTask:(id)a0 currentCountdown:(long long)a1 playingAweme:(id)a2;
- (void).cxx_destruct;
- (void)setTask:(id)a0;
- (id)init;

@end
