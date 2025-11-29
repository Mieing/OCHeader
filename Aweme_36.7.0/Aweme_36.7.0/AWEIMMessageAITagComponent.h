@class AWEIMUILabelPresenter;

@interface AWEIMMessageAITagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUILabelPresenter *labelPresenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void).cxx_destruct;

@end
