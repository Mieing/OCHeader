@class AWEIMUILabelPresenter;

@interface AWEIMMessageOfficialAccountTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUILabelPresenter *labelPresenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_createPresenterIfNeed:(id)a0;
- (void).cxx_destruct;

@end
