@class NSString, TIMXSDKInstance;

@interface TIMXOParticipantsInConversationDataManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncGetParticipantWithConversationId:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
- (id)participantsListOfConversationsContainAnyUserInUidList:(id)a0;
- (BOOL)isParticipantExistWithUid:(id)a0;
- (id)participantsListOfParticipantsInAnyLocalConversationWithUidList:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
