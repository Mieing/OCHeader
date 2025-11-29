@interface AWERelatedRecommendImpl.RelatedRecommendTabListItemViewController : UIViewController <AWERelatedRecommendImpl.RelatedRecommendPanelContainerProtocol, AWETabListItemViewControllerProtocol> {
    void /* unknown type, empty encoding */ itemModel;
    void /* unknown type, empty encoding */ configModel;
    void /* unknown type, empty encoding */ tabItemModelsArrayCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relatedRecommendVC;
}

- (void)sheetDidChangeFrame;
- (void)setPanelIsExpandWithIsExpand:(BOOL)a0;
- (void)setPanelFullScreenStateWithIsExpand:(BOOL)a0;
- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (void)configWithTabItemModel:(id)a0;
- (BOOL)tabListDisableTabItemStickSegmentedControl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
