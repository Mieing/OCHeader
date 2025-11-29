@class NSString, NSMapTable, NSRecursiveLock;

@interface BDPInviteTaskManager_HG : NSObject <BDPWarmBootMessage>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *inviteTaskDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)inviteTaskWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
