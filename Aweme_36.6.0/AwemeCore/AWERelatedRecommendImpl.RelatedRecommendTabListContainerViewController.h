@interface AWERelatedRecommendImpl.RelatedRecommendTabListContainerViewController : AWEBaseTabListViewController <IESSegmentedControlDisplayDelegate, IESSegmentedControlDelegae, AWERelatedRecommendImpl.RelatedRecommendPanelContainerProtocol> {
    void /* unknown type, empty encoding */ configModel;
    void /* unknown type, empty encoding */ maxOffsetY;
    void /* unknown type, empty encoding */ tabItemViewControllers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerViewController;
    void /* unknown type, empty encoding */ segmentOptTopOffset;
    void /* unknown type, empty encoding */ tabItemModelsArrayCount;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ shouldSkipClickTrack;
    void /* unknown type, empty encoding */ currentElemetType;
}

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)sheetDidChangeFrame;
- (void)setPanelIsExpandWithIsExpand:(BOOL)a0;
- (void)setPanelFullScreenStateWithIsExpand:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (void)tabListContainerDidEndScrolling:(id)a0;
- (void)segmentedControl:(id)a0 didTapAtIndex:(long long)a1;
- (BOOL)enableSegmentedControlForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (void)segmentedControl:(id)a0 willDisplayCellAtIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
