@class NSSet, NSString, MMFinderLiveOnlineUserLogic, MMFinderLiveTaskId, NSDictionary, NSMutableArray, WCFinderGetLiveOnlineMemberResult;
@protocol MMFinderLiveMicInviteAudienceViewModelDelegate;

@interface MMFinderLiveMicInviteAudienceViewModel : NSObject <MMFinderLiveOnlineUserLogicDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long lastFetchOnlineUserListTime;
@property (retain, nonatomic) MMFinderLiveOnlineUserLogic *onlineUserLogic;
@property (retain, nonatomic) WCFinderGetLiveOnlineMemberResult *onlineMemberResult;
@property (retain, nonatomic) NSString *currentMicConditionTitle;
@property (retain, nonatomic) NSMutableArray *displayedUserList;
@property (retain, nonatomic) NSDictionary *invitedMicAudienceDict;
@property (retain, nonatomic) NSSet *waitConnectAudienceSet;
@property (retain, nonatomic) NSSet *removedAudienceSet;
@property (weak, nonatomic) id<MMFinderLiveMicInviteAudienceViewModelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (BOOL)updateDisplayedUserListWithNotifyFlag:(BOOL)a0;
- (BOOL)updateListWithInvitedMicAudienceDict:(id)a0 waitConnectAudienceSet:(id)a1 removedAudienceSet:(id)a2;
- (void)fetchOnlineUserList;
- (void)tryFetchOnlineUserListAfterMicConditionChanged;
- (void)updateCurrentMicConditionTitle;
- (void)onFetchFinderOnlineUserListWithError:(id)a0 onlineMemberResult:(id)a1;
- (void)onGetLiveGloryList:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
