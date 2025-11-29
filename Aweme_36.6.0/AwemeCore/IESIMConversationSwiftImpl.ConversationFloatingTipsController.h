@interface IESIMConversationSwiftImpl.ConversationFloatingTipsController : NSObject <IESIMConvFloatingBarDataAction> {
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ observerBind;
    void /* unknown type, empty encoding */ isParticipantBind;
    void /* unknown type, empty encoding */ enableUpdate;
    void /* unknown type, empty encoding */ currentTips;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ conversationStatus;
    void /* unknown type, empty encoding */ isCurrentUserAParticipant;
    void /* unknown type, empty encoding */ isConversationBanned;
    void /* unknown type, empty encoding */ conversationStatusBind;
}

@property (nonatomic) BOOL currentTipsUpdated;

- (void)convFloatingBarDataChangedWithChangedContext:(id)a0;
- (void)multiTopFloatingTipsRemovedRecordChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
