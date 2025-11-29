@class NSArray, UICollectionView, UIImage, UILabel, AWEAwemeModel, NSString;

@interface AWERelatedRecommendVideoDeconstructGuessWordView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *gsDataOriginal;
@property (copy, nonatomic) NSArray *gsData;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackTrendingShow;
- (void)refreshFrame;
- (void)trackTrendingWordsClickEntity:(id)a0 index:(long long)a1;
- (void)trackTrendingWordsShowEntity:(id)a0 index:(long long)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)updateWithData:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
