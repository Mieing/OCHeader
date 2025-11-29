@class UIViewController;
@protocol AWEIMInputViewControllerProtocol;

@interface IESIMGroupSpeakPermissionComponent : AWEIMComponentBase <AWEIMGroupBlockInteractorInterface, AWEIMConversationInfoOtherSubscriberProtocol, IESIMChatDataManagerDelegate> {
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ imConversation;
    void /* unknown type, empty encoding */ tableViewService;
    void /* unknown type, empty encoding */ blockLeftTime;
    void /* unknown type, empty encoding */ blockTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fakeInputVC;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ userInfoBinding;
    void /* unknown type, empty encoding */ blockStateBinding;
    void /* unknown type, empty encoding */ shareExtBinding;
    void /* unknown type, empty encoding */ currentSpeakState;
    void /* unknown type, empty encoding */ currentSpeakMode;
}

@property (nonatomic, readonly) BOOL isBlocked;
@property (nonatomic) double blockDDL;
@property (nonatomic, retain) UIViewController<AWEIMInputViewControllerProtocol> *inputVC;
@property (nonatomic) double height;
@property (nonatomic) BOOL hasResolved;

+ (BOOL)enableGroupBlockWithCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onSilentMembers:(id)a0 silentStatus:(long long)a1 silentMembers:(id)a2 silentEndTime:(long long)a3 cmdMessageID:(id)a4;
- (void)onSilentConversation:(id)a0 silentStatus:(long long)a1 cmdMessageID:(id)a2;
- (void)inAppUserInterfaceStyleDidChanged;
- (void)app_willEnterForeground;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)didChangeToBlockState;
- (void)handleConversationUpdateNotiWithNotice:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
