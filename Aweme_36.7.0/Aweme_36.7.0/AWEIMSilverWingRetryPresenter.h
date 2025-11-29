@class AWEIMUILabelPresenter, AWEIMUIImageViewPresenter, AWEIMGestureUIViewPresenter;

@interface AWEIMSilverWingRetryPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMGestureUIViewPresenter *container;
@property (retain, nonatomic) AWEIMUILabelPresenter *titleLabel;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *icon;

- (void)updateView:(id)a0 withContext:(id)a1;
- (void)p_updateProps;
- (void)p_startRotationAnimation;
- (void)p_stopRotationAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
