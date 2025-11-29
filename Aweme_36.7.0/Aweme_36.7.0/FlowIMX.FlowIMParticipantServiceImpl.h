@interface FlowIMX.FlowIMParticipantServiceImpl : NSObject <FlowIMX.FlowIMParticipantService> {
    void /* unknown type, empty encoding */ delegateArray;
    void /* unknown type, empty encoding */ queue;
}

- (void)updateSingleChatVoiceTypeWithConversationID:(id)a0 participantId:(id)a1 voiceTypeId:(id)a2 success:(id /* block */)a3 fail:(id /* block */)a4;
- (void)markParticipantOperatedOf:(id)a0 participantId:(id)a1 type:(long long)a2;
- (void)addConversationParticipantsWithConversationID:(id)a0 participants:(id)a1 operatorId:(id)a2 scene:(long long)a3 success:(id /* block */)a4 fail:(id /* block */)a5;
- (long long)getParticipantOperatedTimeOf:(id)a0 participantId:(id)a1 type:(long long)a2;
- (void)getParticipantOperatedTimeOf:(id)a0 participantId:(id)a1 type:(long long)a2 callback:(id /* block */)a3;
- (id)getParticipantOf:(id)a0 participantId:(id)a1;
- (void)getParticipantOf:(id)a0 participantId:(id)a1 callback:(id /* block */)a2;
- (long long)getParticipantCountOf:(id)a0 participantType:(long long)a1;
- (void)getParticipantCountOf:(id)a0 participantType:(long long)a1 callback:(id /* block */)a2;
- (void)getConversationParticipantsBy:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)getConversationParticipantsBy:(id)a0 needRequest:(BOOL)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)getConversationParticipantsBy:(id)a0 participants:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)deleteConversationParitcipantsWithConversationID:(id)a0 participants:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
