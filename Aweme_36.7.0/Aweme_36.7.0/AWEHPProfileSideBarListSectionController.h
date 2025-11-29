@class AWEHPProfileSideBarModuleContext, NSArray, AWEHPProfileSideBarControllerManager, NSString;
@protocol AWEHPListKitModuleControllerModelProtocol;

@interface AWEHPProfileSideBarListSectionController : IGListSectionController <AWEHPListKitCollectionViewCellDelegate, IGListSupplementaryViewSource, AWEHPListKitModuleControllerProtocol, AWEHPSideBarSectionControllerProtocol>

@property (retain, nonatomic) id<AWEHPListKitModuleControllerModelProtocol> hpListKitModuleModel;
@property (retain, nonatomic) NSArray *hpListKitItemControllers;
@property (weak, nonatomic) AWEHPProfileSideBarControllerManager *manager;
@property (retain, nonatomic) AWEHPProfileSideBarModuleContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLeftSideBarWillOpen;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (id)cellForItemAtIndex:(long long)a0;
- (void)hpListKitViewWillAppear;
- (void)hpListKitViewDidAppear;
- (void)hpListKitViewWillDisappear;
- (void)hpListKitViewDidDisappear;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (BOOL)canMoveItemAtIndex:(long long)a0;
- (BOOL)removeItemControllerWithBusinessId:(id)a0;
- (double)hpListKitModuleHeight;
- (id)hpListKitCollectionViewCellOnCreateView:(id)a0 withModel:(id)a1;
- (void)onLeftSideBarWillClose;
- (void)sideBarEntranceViewOnShow;
- (void)sideBarEntranceViewOnHide;
- (void)hpListKitViewThemeChange:(long long)a0;
- (id)initWithModel:(id)a0 withItemControllers:(id)a1 withManager:(id)a2 withContext:(id)a3;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
