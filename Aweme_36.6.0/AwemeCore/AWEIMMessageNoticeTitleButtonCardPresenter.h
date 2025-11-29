@class AWEIMUIImageViewPresenter, AWEIMUILabelPresenter, AWEIMGestureUIViewPresenter, AWEIMUIViewPresenter;

@interface AWEIMMessageNoticeTitleButtonCardPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *iconPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *iconBoxPresenter;
@property (retain, nonatomic) AWEIMUILabelPresenter *titlePresenter;
@property (retain, nonatomic) AWEIMUILabelPresenter *subtitlePresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *titleBoxPresenter;
@property (retain, nonatomic) AWEIMUILabelPresenter *rightButtonTitlePresenter;
@property (retain, nonatomic) AWEIMGestureUIViewPresenter *rightButtonPresenter;

+ (id)titleWithContent:(id)a0;
+ (id)subtitleWithContent:(id)a0;

- (id)createViewWithContext:(id)a0;
- (void)didReceiveProps:(id)a0;
- (void)adaptBackgroundImageChanged;
- (void)p_setupPresenters;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
