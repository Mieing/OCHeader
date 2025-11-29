@class NSString, TIMXSDKInstance;

@interface TIMXOConversationIdentifierTrick : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)otherUserFor1to1ChatConversationIdentifier:(id)a0;
- (id)conversationIDFor1to1ChatWithOtherUser:(long long)a0 inInbox:(int)a1;
- (BOOL)isSelfConversationWithConversationIdentifier:(id)a0;
- (BOOL)dbExistConversationWithIdentifier:(id)a0;
- (id)syncCreate1to1ConversationWithUser:(long long)a0 inInbox:(int)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
