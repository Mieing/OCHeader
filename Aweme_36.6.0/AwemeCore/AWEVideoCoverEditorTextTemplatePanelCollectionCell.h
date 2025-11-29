@class UIView;
@protocol AWETextTemplateStickerUIConfigurationProtocol;

@interface AWEVideoCoverEditorTextTemplatePanelCollectionCell : AWETextTemplateCollectionViewCell

@property (retain, nonatomic) id<AWETextTemplateStickerUIConfigurationProtocol> uiConfig;
@property (retain, nonatomic) UIView *emptyView;

- (void)showEmptyView;
- (void)updateUIConfig:(id)a0;
- (void)hideEmptyView;
- (void)updateIconImageIfNeededWithSticker:(id)a0 forCell:(id)a1 atIndexPath:(id)a2;
- (void)handleClearCellSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionViewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
