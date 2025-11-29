@class AWEBinding;

@interface AWEIMMessageTailQuickReplyComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEBinding *displayingReplyMessageIDBinding;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (void)p_show:(BOOL)a0;
- (void)p_didTapReplyButton;
- (void)p_doShowAction:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
