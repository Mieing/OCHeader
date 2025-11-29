@class NSTimer, AWEIMActiveUserDataTracker, NSString, NSArray, NSSet, NSMutableDictionary, AWEIMActiveUserAcquirerConfig, NSObject;
@protocol AWEIMActiveUserAcquirerDelegate, AWEIMActiveUserAcquirerFetchEventDelegate, OS_dispatch_semaphore;

@interface AWEIMActiveUserAcquirer : NSObject <AWEIMActiveUserAcquirerService>

@property (retain, nonatomic) NSTimer *activeTimer;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) NSMutableDictionary *userMap;
@property (retain, nonatomic) NSMutableDictionary *groupMap;
@property (retain, nonatomic) NSMutableDictionary *uniqueFlagKeyMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled;
@property (copy, nonatomic) NSSet *lastRequestKeys;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *secUidList;
@property (readonly, copy, nonatomic) NSArray *convIdList;
@property (retain, nonatomic) AWEIMActiveUserDataTracker *dataTracker;
@property (copy, nonatomic) id /* block */ didEnterBackgroundBlock;
@property (copy, nonatomic) id /* block */ willEnterForegroundBlock;
@property (weak, nonatomic) id<AWEIMActiveUserAcquirerDelegate> delegate;
@property (weak, nonatomic) id<AWEIMActiveUserAcquirerFetchEventDelegate> fetchEventdelegate;
@property (retain, nonatomic) AWEIMActiveUserAcquirerConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acquirerWithType:(unsigned long long)a0;

- (void)fetchActiveStatus;
- (void)p_fetchActiveStatus;
- (void)p_loopFetchActiveStatus;
- (void)p_fetchUserActiveStatusWithSource:(id)a0;
- (void)p_updateWithActiveUserInfos:(id)a0 nonFriendActiveUserInfos:(id)a1 dictionary:(id)a2;
- (void)triggerCompletionsWithActiveUserInfo:(id)a0 nonFriendActiveUserInfo:(id)a1;
- (id)getActiveUserAcquirerValueWithKey:(id)a0;
- (void)bindUniqueFlag:(id)a0 key:(id)a1;
- (void)setActiveUserAcquirerValue:(id)a0 withChatType:(long long)a1 key:(id)a2;
- (void)updateWithActiveUserInfos:(id)a0 nonFriendInfos:(id)a1;
- (void)updateWtihChatType:(long long)a0 key:(id)a1 uid:(id)a2 uniqueFlag:(id)a3 cacheInfo:(id)a4 cacheNonFriendInfo:(id)a5 completion:(id /* block */)a6;
- (void)removeCacheWithChatType:(long long)a0 key:(id)a1;
- (void)removeCacheCallbackWithUniqueFlag:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)start;
- (void)cleanTimer;
- (void)resume;
- (void)dealloc;

@end
