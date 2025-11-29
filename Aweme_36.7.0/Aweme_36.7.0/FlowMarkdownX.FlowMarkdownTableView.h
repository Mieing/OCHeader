@interface FlowMarkdownX.FlowMarkdownTableView : UIView <UIContextMenuInteractionDelegate, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ interactLink;
    void /* unknown type, empty encoding */ debugClick;
    void /* unknown type, empty encoding */ subItemCopyClick;
    void /* unknown type, empty encoding */ textSelectedBlock;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
    void /* unknown type, empty encoding */ fullscreenPreviewBlock;
    void /* unknown type, empty encoding */ fullscreenDisplay;
    void /* unknown type, empty encoding */ listItemPreLabel;
    void /* unknown type, empty encoding */ colletionView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ topHeaderView;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ tableData;
    void /* unknown type, empty encoding */ layoutInfo;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ message;
}

- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
