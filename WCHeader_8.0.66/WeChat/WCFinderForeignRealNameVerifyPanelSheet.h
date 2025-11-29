@interface WCFinderForeignRealNameVerifyPanelSheet : WCFinderCustomPanelSheet

@property (copy, nonatomic) id /* block */ okBlock;

- (void)viewDidLoad;
- (id)loadContentView;
- (void)addIcon:(id)a0 flex:(void *)a1;
- (void)addTitle:(id)a0 flex:(void *)a1;
- (void)addDetail:(id)a0 flex:(void *)a1;
- (void)addOkButton:(id)a0 flex:(void *)a1;
- (void)addCancelBtn:(id)a0 flex:(void *)a1;
- (void)onClickOk;
- (void).cxx_destruct;

@end
