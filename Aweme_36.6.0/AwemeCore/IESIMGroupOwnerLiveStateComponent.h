@interface IESIMGroupOwnerLiveStateComponent : AWEIMChatCellComponentBase {
    void /* unknown type, empty encoding */ hintUpdateService;
    void /* unknown type, empty encoding */ floatingTipInterface;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ conStatusInValid;
    void /* unknown type, empty encoding */ currentUserParticipantStatusInValid;
    void /* unknown type, empty encoding */ conBanStatusInValid;
    void /* unknown type, empty encoding */ floatingTipExist;
    void /* unknown type, empty encoding */ conBoxType;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
