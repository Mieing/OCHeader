@interface AWEImageTextCommonController : BDMultiContentContainer.BaseContentListController <AWEViewControllerLifeCycle, BDMultiContentContainer.BaseContentListDataUpdateProtocol>

- (void)onListDidReset;
- (void)onModelDidUpdateWithModel:(id)a0;
- (id)init;
- (void)viewDidLoad;

@end
