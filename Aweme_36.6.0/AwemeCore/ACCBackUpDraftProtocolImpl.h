@interface ACCBackUpDraftProtocolImpl : NSObject <ACCBackUpDraftProtocol>

- (void)removeDraftInnerPush;
- (BOOL)extendDraftValidityWithDraftID:(id)a0 userID:(id)a1;

@end
