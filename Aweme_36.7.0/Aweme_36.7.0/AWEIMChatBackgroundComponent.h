@class NSString;

@interface AWEIMChatBackgroundComponent : AWEIMComponentBase <AWEIMUserMessageTemplateAction, AWEIMSystemMessageTemplateAction, AWEIMChatBackgroundInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)messageBlankDidLongPressed:(id)a0;
- (void)noticeBlankDidLongPressed:(id)a0;
- (void)processChangeBackgroundResponse:(id)a0;
- (void)p_blankDidLongPressed;
- (id)p_noticeMessageSourcePath:(id)a0;

@end
