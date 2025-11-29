@class NSString, AWEUserCenterWhoCanMessageMeDataController, UICollectionView;

@interface AWEUserCenterWhoCanMessageMeViewController : UIViewController <AWEUserCenterWhoCanMessageMeUpdateDataDelegate, AWEUserCenterWhoCanMessageMeViewControllerCollectionViewProtocol, AWERouterViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeDataController *dataController;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *defaultOpen;
@property (nonatomic) BOOL directlyExitPageAfterPopupDismiss;
@property (nonatomic) BOOL useCardUIStyle;
@property (copy, nonatomic) NSString *highlightID;
@property (nonatomic) BOOL needInvisibleToast;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getDefaultCellHight;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked;
- (void)highlightCellIfNeeded;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)p_highlightCellIfNeeded;
- (void)highlightCellWithIndex:(id)a0;
- (id)p_highlightIndexPathWithID:(id)a0;
- (void)exitPage;
- (void)__openChatBlockSettingIfNeed;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)reload;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reloadSections:(long long)a0;

@end
