@class NSArray, UICollectionView, AWEGeneralFilmTVLeadingCreatorModel, UILabel, NSString;
@protocol AWESearchFilmTVLeadingCreatorViewDelegate;

@interface AWESearchFilmTVLeadingCreatorView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEGeneralFilmTVLeadingCreatorModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *leadingCreators;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWESearchFilmTVLeadingCreatorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeight;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateModel:(id)a0;

@end
