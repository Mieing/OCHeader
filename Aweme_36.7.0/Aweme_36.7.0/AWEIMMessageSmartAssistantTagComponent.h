@class AWEIMMessageSmartAssistantTagViewModel;

@interface AWEIMMessageSmartAssistantTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMMessageSmartAssistantTagViewModel *smartAssistantTagViewModel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenterIfNeeded;
- (void)p_didTappedTag;
- (void).cxx_destruct;

@end
