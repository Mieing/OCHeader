@class AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMMessageExchangeImageTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUILabelPresenter *descLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *backgroundView;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;

@end
