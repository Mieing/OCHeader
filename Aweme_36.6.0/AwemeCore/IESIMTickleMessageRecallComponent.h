@interface IESIMTickleMessageRecallComponent : AWEIMFlexComponentSwiftAdapter <AWEIMMessageNoticePluginProtocol, IESIMTickleMessageRecallInterface>

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)attributedContent;
- (void)componentDidMounted:(id)a0;
- (void)recallMessage;
- (id)init;

@end
