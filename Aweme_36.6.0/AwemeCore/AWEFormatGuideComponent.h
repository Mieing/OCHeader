@interface AWEFormatGuideComponent : AWEIMComponentBase <AWEIMFloatingViewDispatchProtocol, AWEConversationFormatEnterActions, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ api;
    void /* unknown type, empty encoding */ formatOwnerId;
    void /* unknown type, empty encoding */ noticeView;
    void /* unknown type, empty encoding */ isSecondOrThirdUser;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ isFirstSendMessage;
    void /* unknown type, empty encoding */ _invalid;
}

@property (nonatomic) BOOL showInFloatMode;
@property (nonatomic, copy) id /* block */ continueBlock;
@property (nonatomic, copy) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)willSendNewMessage;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
