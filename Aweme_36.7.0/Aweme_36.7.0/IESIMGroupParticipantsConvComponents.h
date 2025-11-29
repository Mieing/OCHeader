@interface IESIMGroupParticipantsConvComponents : AWEIMComponentBase <AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ needCheckParticipantIntegrity;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didUpdatedConversation:(id)a0 messageId:(id)a1 error:(id)a2;
- (void)componentDidMounted:(id)a0;
- (id)init;

@end
