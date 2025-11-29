@class NSDictionary, NSString, UIView;
@protocol IESIMLoadingViewProtocol, IESIMVacantViewProtocol;

@interface AWEIMRouterLoadingStateViewController : UIViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UIView *emptyContainerView;
@property (retain, nonatomic) UIView<IESIMVacantViewProtocol> *vacantView;
@property (copy, nonatomic) id /* block */ routerLoadingStateBlock;
@property (copy, nonatomic) id /* block */ targetViewControllerChangeCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__showLoadingView;
- (void)__backBtnClicked;
- (void)p_showEmptyPageWithPageState:(unsigned long long)a0;
- (void)p_layoutEmptyViewIfNeeded;
- (void)__loadTargetPageData;
- (void)removeLoadingStateViewController;
- (void)__dismissLoadingViewIfNeeded;
- (void)replaceLoadingStateViewControllerWithTargetVC:(id)a0 showType:(id)a1;
- (void)presentTargetVC:(id)a0;
- (void)pushTargetVC:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
