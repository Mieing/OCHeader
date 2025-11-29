@interface AWEKnowledgeRichContentImpl.FullPageRouterViewController : UIViewController <AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ itemID;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ backToSchema;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ defaultMute;
    void /* unknown type, empty encoding */ logExtraDict;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ isRequestOnAir;
    void /* unknown type, empty encoding */ isViewDidAppear;
    void /* unknown type, empty encoding */ shouldPushFullPageWhenDisapper;
    void /* unknown type, empty encoding */ willMoveToParent;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ richAwemePageVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButtonView;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
