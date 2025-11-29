@class IESECGoodsFeedSearchImageCard, NSString, UICollectionView, IESECGoodsFeedSearchCellViewModel, UIView;

@interface IESECGoodsFeedSearchCardCell : IESECGoodsFeedBaseCell <UICollectionViewDelegate, UICollectionViewDataSource, IESECGoodsFeedSearchCardDelegate>

@property (retain, nonatomic) UIView *pictureNodeView;
@property (retain, nonatomic) IESECGoodsFeedSearchImageCard *leftImageCard;
@property (retain, nonatomic) IESECGoodsFeedSearchImageCard *middleImageCard;
@property (retain, nonatomic) IESECGoodsFeedSearchImageCard *rightImageCard;
@property (retain, nonatomic) UICollectionView *keywordCollectionView;
@property (retain, nonatomic) IESECGoodsFeedSearchCellViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCardWithModel:(id)a0;
- (void)clickCollectionView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithViewModel:(id)a0;

@end
