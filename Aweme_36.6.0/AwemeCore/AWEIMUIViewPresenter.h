@class AWEIMUIViewPresenterProps;

@interface AWEIMUIViewPresenter : AWEIMFlexPresenter

@property (retain, nonatomic) AWEIMUIViewPresenterProps *props;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)willUnBindView:(id)a0;
- (void)updateView:(id)a0 withProps:(id)a1;
- (void).cxx_destruct;
- (void)hidden:(BOOL)a0;

@end
