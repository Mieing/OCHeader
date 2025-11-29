@class NSSet, NSString;

@interface AWEIMIncentiveChatForbidNoticeShowService : HTSService <AWEIMIncentiveChatForbidNoticeShowService, IESIMUserServiceMessage>

@property (retain, nonatomic) NSSet *groupForbidNoticeSceneShowSet;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } groupForbidNoticeSceneShowSetLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)shouldForbidNoticeShowWithScene:(id)a0;
- (void)updateGroupForbidNoticeSceneWithArray:(id)a0 isFromStorage:(BOOL)a1;
- (void)p_updateGroupStorageData;
- (id)p_getGroupStorageKeyWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
