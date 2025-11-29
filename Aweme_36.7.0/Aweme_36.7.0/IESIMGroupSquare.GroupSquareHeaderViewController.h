@interface IESIMGroupSquare.GroupSquareHeaderViewController : UIViewController <AWETabListHeaderViewControllerProtocol, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ recommendCellReuseIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ isFirstLoad;
}

- (void)configWithHeaderModel:(id)a0;
- (double)heightForHeaderView;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
