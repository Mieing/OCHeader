@interface AWENewScanImpl.ScanTextResultViewController : UIViewController <AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ tipsLabel;
    void /* unknown type, empty encoding */ contentTextView;
    void /* unknown type, empty encoding */ copyButton;
}

- (void)copyButtonTapped;
- (void)backAction;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
