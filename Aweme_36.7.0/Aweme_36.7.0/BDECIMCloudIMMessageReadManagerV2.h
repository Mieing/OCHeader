@class NSString, BDECPigeonClientConfigV2;

@interface BDECIMCloudIMMessageReadManagerV2 : NSObject <BDECIMCloudIMMessageReadManagerV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addWeakDelegate:(id)a0;
- (long long)messageReadIndexInConversation:(id)a0 byUserID:(long long)a1;
- (void)fetchMessageReadsWithArrConversationID:(id)a0 arrConversationShortID:(id)a1 arrWhichUserID:(id)a2 inbox:(int)a3 requestFrom:(id)a4 completion:(id /* block */)a5;
- (id)messageReadIndexOfAllUsersInConversation:(id)a0;
- (id)messageReadParticipantsWithConversationID:(id)a0 messageIndex:(long long)a1;
- (BOOL)messageReadWithConversationID:(id)a0 messageIndex:(long long)a1 byUserID:(long long)a2;
- (void)fetchMessageReadsWithConversationID:(id)a0 conversationShortID:(id)a1 requestFrom:(id)a2 completion:(id /* block */)a3;
- (void)fetchMessageReadsWithArrConversationID:(id)a0 arrConversationShortID:(id)a1 requestFrom:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
