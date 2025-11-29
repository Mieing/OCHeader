@class NSString, AWEIMPushProcessor;

@interface AWEIMStrangerPushManager : NSObject <IESIMLoginManagerMessage, IESIMChatDataManagerDelegate, AWEIMPushConditionLimitSceneMessage>

@property (retain, nonatomic) AWEIMPushProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)iesim_didInsertStrangerNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(long long)a2 context:(id)a3;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)p_setup;
- (void)retryPushBufferInfoWithEventType:(long long)a0;
- (void)didStrangerHitLimitSceneWithType:(long long)a0 viewController:(id)a1;
- (void)p_addObserve;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
