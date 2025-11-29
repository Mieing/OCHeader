@class AWEIMUIImageViewPresenter, AWEIMUIBlurViewPresenter, AWEIMSmallCardPresenter, AWEIMUILabelPresenter, AWEIMUIGradientViewPresenter;

@interface AWEIMShareH5ContentPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *backgroundImage;
@property (retain, nonatomic) AWEIMUIGradientViewPresenter *gradient;
@property (retain, nonatomic) AWEIMSmallCardPresenter *smallCard;
@property (retain, nonatomic) AWEIMUIBlurViewPresenter *blurView;
@property (retain, nonatomic) AWEIMUILabelPresenter *tagLabel;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
