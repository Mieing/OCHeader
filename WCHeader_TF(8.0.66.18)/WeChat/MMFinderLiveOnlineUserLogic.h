@class NSString, NSMutableDictionary, MMFinderLiveTaskId, MMFinderLiveTask;
@protocol MMFinderLiveOnlineUserLogicDelegate;

@interface MMFinderLiveOnlineUserLogic : MMLiveOnlineUserLogic <WCFinderLiveExt>

@property (readonly, nonatomic) NSString *finderUserName;
@property (readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) unsigned long long filterScene;
@property (weak, nonatomic) id<MMFinderLiveOnlineUserLogicDelegate> logicDelegate;
@property (retain, nonatomic) NSMutableDictionary *userCommentDisableDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)fetchOnlineUserList;
- (void)fetchGloryList;
- (void)fetchKtvPlayMemberList;
- (void)updateFilterScene:(unsigned long long)a0;
- (void)onFinderGetLiveOnlineMember:(id)a0 taskId:(id)a1 onlineMemberResult:(id)a2;
- (void)onFinderLiveKtvGetPlayMember:(id)a0 taskId:(id)a1 playMemberResult:(id)a2;
- (void).cxx_destruct;

@end
