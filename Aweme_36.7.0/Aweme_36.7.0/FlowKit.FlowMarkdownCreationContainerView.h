@interface FlowKit.FlowMarkdownCreationContainerView : FlowKit.FlowMarkdownBaseContainerView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ innerCellModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ flowLayout;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ firstRefresh;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ creationList;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ selectedImageCell;
    void /* unknown type, empty encoding */ needRefreshOffset;
    void /* unknown type, empty encoding */ hiddenCellIndex;
    void /* unknown type, empty encoding */ loadingLabel;
    void /* unknown type, empty encoding */ typingIndicator;
    void /* unknown type, empty encoding */ getCurrentMessageBlock;
    void /* unknown type, empty encoding */ markdownString;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
