@class NSArray, NSString, UICollectionView, IESECHighlightButton, IESECGradientView, UIView;
@protocol IESECCommentScrollDelegate;

@interface IESECCommentScrollCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (copy, nonatomic) NSArray *tagDataArray;
@property (copy, nonatomic) NSString *selectedTagID;
@property (nonatomic) BOOL shouldSelected;
@property (retain, nonatomic) IESECHighlightButton *sortByButton;
@property (nonatomic) BOOL isSortByTime;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) UIView *separateView;
@property (weak, nonatomic) id<IESECCommentScrollDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)itemWidthWithTag:(id)a0;

- (void)configureCommentTagWithTag:(id)a0 currentSelectedTagID:(id)a1;
- (void)sortComment;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
