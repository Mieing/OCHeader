@interface AWEBookImpl.BookDetailPageHeaderViewController : UIViewController <BDXContainerLifecycleProtocol, AWETabListHeaderViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ bdxView;
    void /* unknown type, empty encoding */ bridgeSubscriberList;
    void /* unknown type, empty encoding */ beginLoadLynxHeaderHandler;
    void /* unknown type, empty encoding */ endLoadLynxHeaderHandler;
}

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)configWithHeaderModel:(id)a0;
- (double)heightForHeaderView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
