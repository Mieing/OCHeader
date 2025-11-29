@class NSArray, NSString, UICollectionView, IESECGoodsCommentContext;
@protocol IESECCommentTagCellDelegate;

@interface IESECCommentOneLineTagView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (copy, nonatomic) NSArray *tagDataArray;
@property (copy, nonatomic) NSString *selectedTagID;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (weak, nonatomic) id<IESECCommentTagCellDelegate> cellDelegate;
@property (nonatomic) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCommentTagWithTag:(id)a0 currentSelectedTagID:(id)a1;
- (double)itemWidthWithTag:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
