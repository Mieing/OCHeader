@class NSString, UICollectionView, UIView, AWETextTemplateCategoryModel;
@protocol AWETextTemplateStickerOverlayProtocol, AWETextTemplateStickerErrorViewProtocol, AWETextTemplateStickerUIConfigurationProtocol, AWETextTemplateCollectionViewCellDelegate;

@interface AWETextTemplateCollectionViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (class, retain, nonatomic) Class stickerCellClass;

@property (retain, nonatomic) UIView<AWETextTemplateStickerOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<AWETextTemplateStickerErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView<AWETextTemplateStickerOverlayProtocol> *emptyView;
@property (retain, nonatomic) id<AWETextTemplateStickerUIConfigurationProtocol> UIConfig;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (nonatomic) BOOL isScrolledManually;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (retain, nonatomic) AWETextTemplateCategoryModel *categoryModel;
@property (weak, nonatomic) id<AWETextTemplateCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellReusedID;
+ (id)identifier;

- (void)hideErrorView;
- (void)showEmptyView;
- (void)updateUIConfig:(id)a0;
- (void)hideEmptyView;
- (void)updateIconImageIfNeededWithSticker:(id)a0 forCell:(id)a1 atIndexPath:(id)a2;
- (void)onErrorTap;
- (void)updateUIConfigWithoutLayout:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)updateStatus:(unsigned long long)a0;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionViewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)showLoadingView;
- (void)showErrorView;
- (void)hideLoadingView;

@end
