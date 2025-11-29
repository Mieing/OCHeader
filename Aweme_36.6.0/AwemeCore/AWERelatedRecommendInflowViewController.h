@interface AWERelatedRecommendInflowViewController : AWERelatedRecommendViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_topNavigationBar;
    void /* unknown type, empty encoding */ inflowDelegate;
}

- (id)createNavigationBar;
- (void)setupUI;
- (id)initWithOuterDataController:(id)a0 navigationViewController:(id)a1 context:(id)a2 container:(id)a3 currentModel:(id)a4 delegate:(id)a5 shouldShowTopView:(BOOL)a6;
- (id)initWithOuterDataController:(id)a0 navigationViewController:(id)a1 context:(id)a2 container:(id)a3 currentModel:(id)a4 videoDeconstructGuessWordModel:(id)a5 delegate:(id)a6 shouldShowTopView:(BOOL)a7;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
