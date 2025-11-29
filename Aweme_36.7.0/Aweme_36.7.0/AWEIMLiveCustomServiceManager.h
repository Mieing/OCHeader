@class NSHashTable;

@interface AWEIMLiveCustomServiceManager : NSObject

@property (retain, nonatomic) NSHashTable *liveDelegates;

+ (BOOL)featureEnable;
+ (void)p_pushHalfWithContainer:(id)a0 isInLive:(BOOL)a1;
+ (id)sharedManager;

- (void)asyncGetCurrentUnReadCount:(id)a0 role:(long long)a1 completion:(id /* block */)a2;
- (id)getLiveCustomServiceChatFrom:(id)a0;
- (void)pushCustomServiceHalfScreenChatInAppPush:(id)a0;
- (id)displaySenderNameForMessage:(id)a0;
- (void)addLiveDelegate:(id)a0;
- (void)pushCustomServiceChatWithSPUid:(id)a0 extra:(id)a1 token:(id)a2 scene:(id)a3 openPlatformSource:(id)a4 completion:(id /* block */)a5;
- (void)pushCustomServiceChatWithSPUid:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)pushCustomServiceBoxListVCInLiveForSpuid:(id)a0 extra:(id)a1;
- (void)dismissTopIMChatVCIfNeeded;
- (BOOL)haveLiveDelegate;
- (void)updateUnReadCount:(id)a0 totalCount:(long long)a1;
- (id)serviceRoleExtraInfo:(id)a0;
- (void)markLastMessageVCDeactive:(BOOL)a0;
- (id)customServiceViewController:(id)a0 needFloat:(BOOL)a1 isInLive:(BOOL)a2 extra:(id)a3;
- (void)asyncGetCurrentUnReadCount:(id)a0 role:(long long)a1 checkedLaunch:(BOOL)a2 completion:(id /* block */)a3;
- (id)customServiceViewController:(id)a0 needFloat:(BOOL)a1 isInLive:(BOOL)a2 token:(id)a3 scene:(id)a4 openPlatformSource:(id)a5 extra:(id)a6;
- (void)pushCustomServiceBoxListVC:(BOOL)a0 role:(long long)a1 spUid:(id)a2 extra:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
