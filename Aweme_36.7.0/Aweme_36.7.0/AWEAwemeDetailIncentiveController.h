@interface AWEAwemeDetailIncentiveController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol> {
    void /* unknown type, empty encoding */ didDisplayModel;
}

- (void)containerDidLoad;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
