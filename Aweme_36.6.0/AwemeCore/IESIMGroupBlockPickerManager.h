@class NSSet, AWEIMMessageConversation;
@protocol IESIMGroupSpeakPermissionService;

@interface IESIMGroupBlockPickerManager : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSSet *blockedMemvberUidSet;
@property (copy, nonatomic) NSSet *unblockedDisspeakMemvberUidSet;
@property (weak, nonatomic) id<IESIMGroupSpeakPermissionService> speakPermissionService;

+ (id)sharedInstance;

- (void)dealWithunblockedDisspeakMemvberUidSet:(id)a0;
- (id)participantDataManager;
- (id)createBlockGroupMemberVCWithConversation:(id)a0 blockManagerVC:(id)a1 backToVCWhenOperationFailed:(id)a2;
- (void).cxx_destruct;
- (void)updateParticipants;

@end
