@class AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMMessageRoleTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUILabelPresenter *labelPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *viewPresenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_observerConversationUpdate;
- (void).cxx_destruct;

@end
