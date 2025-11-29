@interface IESIMB2CImpl.IESIMB2CPickerListViewController : UIViewController <IESIMB2CPickerListCollectionViewCellDelegate, UICollectionViewDelegate, IESIMSheetVCDelegate> {
    void /* unknown type, empty encoding */ listViewModels;
    void /* unknown type, empty encoding */ pickerContext;
    void /* unknown type, empty encoding */ leftRightOffset;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ contanerSheet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellProvider;
}

- (void)didClickCell:(id)a0 itemModel:(id)a1 completion:(id /* block */)a2;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)iesim_themeReload;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
