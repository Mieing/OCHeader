@interface GetChatRoomMemberDetailEventHandler : ProtobufEventHandler

- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)batchCheckAndUpdataOpenImResource:(id)a0;
- (id)HandleMemContact:(id)a0;

@end
