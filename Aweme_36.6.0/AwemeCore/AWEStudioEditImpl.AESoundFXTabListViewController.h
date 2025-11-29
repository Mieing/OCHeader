@interface AWEStudioEditImpl.AESoundFXTabListViewController : AWEBaseTabListViewController <IESSegmentedControlScrollEventsDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ segmentedControl;
}

- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (void)setupContainerScrollView:(id)a0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (void)tabListTabContainerDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabListAddTabItemAsChildViewController;
- (void)segmentedControlWillBeginDragging:(id)a0;
- (void)segmentedControlDidEndScrolling:(id)a0;
- (void)tabListTabContainerWillBeginDragging:(id)a0;
- (void)tabListTabContainerDidEndScrolling:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
