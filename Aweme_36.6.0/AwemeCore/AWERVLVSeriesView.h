@class NSArray, UIImageView, UICollectionView, UILabel, UIView, NSString;
@protocol AWERVLVSeriesViewDelegate, AWERVLVSelectDelegate;

@interface AWERVLVSeriesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *totalView;
@property (retain, nonatomic) UILabel *totalLabel;
@property (retain, nonatomic) UIImageView *totalImg;
@property (retain, nonatomic) NSArray *albumModelList;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isOnPannel;
@property (weak, nonatomic) id<AWERVLVSeriesViewDelegate> delegate;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> selectDelegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAllPanel;
- (void)updateWithModel:(id)a0 currentSelectIndex:(long long)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFlag:(BOOL)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
