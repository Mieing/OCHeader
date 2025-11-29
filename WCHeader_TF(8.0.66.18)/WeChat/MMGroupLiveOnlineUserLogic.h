@class MMGroupLiveTask, NSString, MMGroupLiveTaskId;
@protocol MMGroupLiveOnlineUserLogicDelegate;

@interface MMGroupLiveOnlineUserLogic : MMLiveOnlineUserLogic <MMGroupLiveMgrExt>

@property (readonly, nonatomic) MMGroupLiveTaskId *groupTaskId;
@property (readonly, nonatomic) MMGroupLiveTask *liveTask;
@property (nonatomic) unsigned long long onlineUserCount;
@property (weak, nonatomic) id<MMGroupLiveOnlineUserLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)fetchOnlineUserList;
- (BOOL)kickAudience:(id)a0;
- (void)onGetLiveMessageResult:(id)a0 liveMessageResp:(id)a1 liveId:(unsigned long long)a2 andRoomId:(id)a3;
- (void)onGetLiveOnlineUserListWithLiveId:(unsigned long long)a0 andRoomId:(id)a1 andUserList:(id)a2;
- (void)onKickAudienceResult:(id)a0 userName:(id)a1 liveId:(unsigned long long)a2 roomId:(id)a3;
- (void).cxx_destruct;

@end
