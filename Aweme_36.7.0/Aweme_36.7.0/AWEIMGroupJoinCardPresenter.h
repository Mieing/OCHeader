@class AWEIMUIButtonPresenter, AWEIMUILabelPresenter, AWEIMGroupJoinFunctionsPresenter, AWEIMFlexStyle, AWEIMUIViewPresenter;

@interface AWEIMGroupJoinCardPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIButtonPresenter *closeButtonPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *titleBoxLayoutPresenter;
@property (retain, nonatomic) AWEIMUILabelPresenter *titlePresenter;
@property (retain, nonatomic) AWEIMUILabelPresenter *subTitlePresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *functionsBoxLayoutPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *linePresenter;
@property (retain, nonatomic) AWEIMGroupJoinFunctionsPresenter *functionsPresenter;
@property (retain, nonatomic) AWEIMFlexStyle *cellBoxStyle;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)updatePresenterWhenHasBackgroundWithProps:(id)a0;
- (void)updateIMFlexStyle;
- (void)p_setUpSubPresenters;
- (void)p_setUpClosePresenter;
- (void)p_setUpTitleBoxPresenter;
- (void)p_setUpBottomBoxPresenter;
- (void)updateFunctionsPresenterLayout:(id)a0;
- (void)updateFunctionsBoxLayoutWithPresenter:(id)a0;
- (void)updateGroupJoinCardFunctionsItemsPresenterLayout;
- (void)reloadFunctionItemsPresenter;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
