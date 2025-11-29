@class NSString;

@interface AWEIMMessageBubbleThemeComponent : AWEIMFlexComponent <AWEIMMessageListThemeAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)onChatThemeDidChange:(id)a0;
- (void)p_createPresenterIfNeedWithModel:(id)a0;

@end
