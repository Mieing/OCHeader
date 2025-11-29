@class NSLock, NSMutableDictionary, NSMutableArray;

@interface IESLiveUserSubscribeControl : NSObject

@property (retain, nonatomic) NSMutableDictionary *followStatusSubscribers;
@property (retain, nonatomic) NSMutableDictionary *syncUserLoginSubscribers;
@property (retain, nonatomic) NSMutableArray *followStatusSubscriberKeys;
@property (retain, nonatomic) NSMutableArray *syncUserLoginSubscriberKeys;
@property (retain, nonatomic) NSLock *lock;

- (void)subscribe:(id)a0 followStatusChangedWithCallback:(id /* block */)a1;
- (void)removeFollowStatusWithSubscriber:(id)a0;
- (void)subscribe:(id)a0 syncUserLoginWithCallback:(id /* block */)a1;
- (void)removeSyncUserLoginWithSubscriber:(id)a0;
- (void)notifyFollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)notifySyncLoginUser:(id)a0;
- (void)checkFollowStatusSubscribers;
- (void)checkSyncUserLoginSubscribers;
- (void).cxx_destruct;
- (id)init;

@end
