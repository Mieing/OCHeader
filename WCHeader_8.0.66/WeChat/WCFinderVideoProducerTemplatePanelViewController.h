@class UIView, NSString, WCFinderVideoProducerDataSource, WCFinderVideoProducerTemplateTableViewController, NSMutableDictionary, UICollectionView, MJVideoTemplate, MMUIButton, NSIndexPath;
@protocol WCFinderVideoProducerTemplatePanelDelegate;

@interface WCFinderVideoProducerTemplatePanelViewController : WCFinderVideoProducerBaseViewControllerFragment <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderVideoProducerTemplateTableDelegate> {
    NSIndexPath *_selectedTabIndex;
    WCFinderVideoProducerTemplateTableViewController *_currentTemplateTableVC;
    long long _focusedSection;
    long long _focusedRow;
    MJVideoTemplate *_focusedTemplate;
}

@property (retain, nonatomic) WCFinderVideoProducerDataSource *templateData;
@property (retain, nonatomic) WCFinderVideoProducerDataSource *tabCellVMData;
@property (retain, nonatomic) NSMutableDictionary *templateTableVCMap;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UICollectionView *tabBarCollectionView;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) UIView *templateTableVCContainerView;
@property (weak, nonatomic) id<WCFinderVideoProducerTemplatePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)onNavigationBarBackgroundColorChange;
- (void)showWithTemplateData:(id)a0 atDefaultPage:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)templateTable:(id)a0 didFocusTemplate:(id)a1 atSection:(long long)a2 row:(long long)a3;
- (void)onClickDismiss:(id)a0;
- (void)onClickConfirm:(id)a0;
- (void)onTabAtIndex:(id)a0 changedSelectTo:(BOOL)a1;
- (void)showTemplateTableVCForSection:(long long)a0 sectionId:(id)a1;
- (void)initView;
- (void)initBackgroundCloseView;
- (void)initContentView;
- (void)initTopBarView;
- (void)initTabBarCollectionView;
- (void)initTemplateTableVCContainerView;
- (double)_getSelectPanelSafeHeight;
- (void).cxx_destruct;

@end
