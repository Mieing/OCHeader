@class NSString;
@protocol IESIMConversationDeleteMessageAfterDisplayInterface;

@interface AWEIMConversationUrgeEnterpriseCommitComponent : AWEIMComponentBase <AWEIMConversationUrgeEnterpriseCommitProtocol, AWEIMLinkTextBehaviorOccursMessage>

@property (weak, nonatomic) id<IESIMConversationDeleteMessageAfterDisplayInterface> deleteMessageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)vcParent;
- (void)linkTextBehaviorOccursWith:(id)a0 message:(id)a1;
- (void)urgeEnterpriseCommitWithLatestUrgeNoticeMessage:(id)a0 scene:(long long)a1 checkSameLimit:(int)a2;
- (id)findLatestNotNoticeMessage;
- (id)requestUrgeEnterpriseWithParams:(id)a0;
- (id)handleSuccessUrgeEnterpriseCommitWithMessage:(id)a0 response:(id)a1 scene:(long long)a2 checkLimit:(int)a3;
- (id)findLatestUrgeNoticeMessageWithMessage:(id)a0 response:(id)a1 checkLimit:(int)a2;
- (void).cxx_destruct;

@end
