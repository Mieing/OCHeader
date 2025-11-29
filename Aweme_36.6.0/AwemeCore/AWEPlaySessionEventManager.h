@class NSSet, NSDictionary, NSString, NSMutableDictionary, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPlaySessionEventManager : NSObject <AWEPlaySessionEventManagerProtocol> {
    NSMutableDictionary *_sessionDict;
    NSMutableDictionary *_onePlayDict;
    NSLock *_storageLock;
    NSLock *_sessionsLock;
    NSLock *_onePlayLock;
    NSObject<OS_dispatch_queue> *_operationQueue;
    BOOL _enableOpt;
    BOOL _enableOnePlay;
}

@property (retain, nonatomic) NSDictionary *playSessionEventsDict;
@property (readonly, nonatomic) NSSet *DiffwhiteSet;
@property (readonly, nonatomic) NSSet *EndwhileSet;
@property (readonly, nonatomic) NSSet *QualityWhileSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)playSessionEvent:(id)a0 params:(id)a1;
- (void)onePlayEvent:(id)a0;
- (void)trackPlaySessionEvent:(long long)a0 eventName:(id)a1 session:(id)a2 params:(id)a3;
- (void)reportLastLaunchIncompleteEvents;
- (void)reportUnmergeableEvent:(id)a0 params:(id)a1;
- (void)storeIncompleteEvents;
- (void)reportEventWithParams:(id)a0;
- (void)storageDoLock;
- (void)storageDoUnLock;
- (void)sessionsDoLock;
- (void)sessionDoUnlock;
- (void)onePlayDoLock;
- (void)onePlayDoUnLock;
- (id)mergeSamePlaySessionEvents:(id)a0 SessionID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeSession:(id)a0;

@end
