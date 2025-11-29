@class AWEIMGradientView, UICollectionView, NSString, IESIMMdTableCollectionViewRenderModel, IESIMMdTableCollectionViewLayoutCache;
@protocol IESIMMdTableCollectionViewDelegate;

@interface IESIMMdTableCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, IESIMMdTableCollectionViewCellDelegate, IESIMMdViewProtocol>

@property (retain, nonatomic) IESIMMdTableCollectionViewRenderModel *renderModel;
@property (retain, nonatomic) IESIMMdTableCollectionViewLayoutCache *layoutCache;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMGradientView *leftGradientView;
@property (retain, nonatomic) AWEIMGradientView *rightGradientView;
@property (weak, nonatomic) id<IESIMMdTableCollectionViewDelegate> iesimMddelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calculateMarkdownTableHeightWithRenderModel:(id)a0;
+ (id)createDefaultView;

- (void)updateTableWithRenderModel:(id)a0 layoutCache:(id)a1;
- (void)setupSubviewsWithCollectionViewLayout:(id)a0;
- (void)p_updateGradientViewWithContentOffsetX:(double)a0 contentWidth:(double)a1 frameWidth:(double)a2;
- (void)didTapLink:(id)a0 inCell:(id)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;

@end
