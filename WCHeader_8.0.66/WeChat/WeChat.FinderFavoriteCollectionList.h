@interface WeChat.FinderFavoriteCollectionList : UIView <UICollectionViewDelegate, WCFinderEmptyTipsViewDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ emptyTipsView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ hightLightIdentifier;
}

- (id)initWithDataProvider:(id)a0 delegate:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)reloadData;
- (void)scrollToTopWithAnimated:(BOOL)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (void)onMenuControllerDidHide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
