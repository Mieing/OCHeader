@class NSString;

@interface AWEIMFromHiHiMessageComponent : AWEIMComponentBase <IESIMChatDataManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_onConversationDataSourceMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void)componentDidMounted:(id)a0;

@end
