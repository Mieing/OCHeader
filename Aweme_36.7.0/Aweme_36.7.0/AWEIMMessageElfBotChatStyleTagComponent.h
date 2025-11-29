@class AWEIMUserInteractionLabelPresenter;

@interface AWEIMMessageElfBotChatStyleTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUserInteractionLabelPresenter *labelPresenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_styleTapped;
- (void).cxx_destruct;

@end
