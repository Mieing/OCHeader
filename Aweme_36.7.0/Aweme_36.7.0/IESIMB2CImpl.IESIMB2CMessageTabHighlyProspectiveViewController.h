@interface IESIMB2CImpl.IESIMB2CMessageTabHighlyProspectiveViewController : UIViewController <UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol, AWEIMInAppPushProtocol, IESIMSheetVCDelegate, UICollectionViewDelegate, IESIMB2CMessageTabHighlyProspectiveViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ listViewModels;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_storage;
    void /* unknown type, empty encoding */ responseModel;
    void /* unknown type, empty encoding */ containerSheet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supplementaryViewProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowInnerPush;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)setGetReachPlanSwitchResponseModel:(id)a0;
- (void)iesim_themeReload;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
