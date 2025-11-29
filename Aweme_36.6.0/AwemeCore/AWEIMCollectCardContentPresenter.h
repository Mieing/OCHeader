@class AWEIMUIImageViewPresenter, CAGradientLayer, AWEIMUILabelPresenter, AWEIMCollectCardMessage, AWEIMUIViewPresenter, UITapGestureRecognizer;

@interface AWEIMCollectCardContentPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *backgroundView;
@property (retain, nonatomic) AWEIMUILabelPresenter *title;
@property (retain, nonatomic) CAGradientLayer *inactiveLayer;
@property (readonly, nonatomic) AWEIMCollectCardMessage *cardMessage;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEIMUILabelPresenter *subtitle;
@property (retain, nonatomic) AWEIMUIViewPresenter *darkView;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (id)initWithContext:(id)a0 cardStyle:(unsigned long long)a1;
- (void)__invokeTap:(id)a0;
- (void)__createComponentsWithContext:(id)a0 cardStyle:(unsigned long long)a1;
- (void)__createBackgroundViewWithCardStyle:(unsigned long long)a0;
- (void)__createTitleWithContext:(id)a0 cardStyle:(unsigned long long)a1;
- (void)__createSubtitleWithContext:(id)a0 cardStyle:(unsigned long long)a1;
- (void)__createDarkView;
- (void).cxx_destruct;

@end
