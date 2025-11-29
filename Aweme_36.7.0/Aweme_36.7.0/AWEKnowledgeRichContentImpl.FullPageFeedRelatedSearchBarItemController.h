@interface AWEKnowledgeRichContentImpl.FullPageFeedRelatedSearchBarItemController : AWEKnowledgeSwiftBasic.FullPageBaseItemController <AWEFullPageFeedPageModeSensitiveComponentProtocol>

- (double)getDeltaHeightWhenPageModeChange:(unsigned long long)a0;
- (void)executePageModeChangeAnimation:(unsigned long long)a0;
- (void)onPageModeDidChage:(unsigned long long)a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)configCellWithCell:(id)a0 viewModel:(id)a1;
- (void)cellWillDisplayWithCell:(id)a0 viewModel:(id)a1;
- (id)initWithViewModel:(id)a0;
- (Class)cellClass;

@end
