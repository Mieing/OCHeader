@class AWEIMLatestKindOfMessageInConversationComponent;

@interface IESIMGroupAssistantReplyTailDetectComponent : AWEIMComponentBase <IESIMGroupAssistantReplyTailDetectInterface>

@property (nonatomic, retain) AWEIMLatestKindOfMessageInConversationComponent *latestMsgComp;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
