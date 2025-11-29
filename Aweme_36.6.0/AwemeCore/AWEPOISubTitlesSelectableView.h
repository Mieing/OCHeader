@class NSArray, UICollectionView, NSString, UILabel, UIView;
@protocol AWEPOISubTitlesSelectableViewDelegate;

@interface AWEPOISubTitlesSelectableView : AWEPOITouchThroughView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *subTitles;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UICollectionView *tageCollection;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEPOISubTitlesSelectableViewDelegate> delegate;
@property (copy, nonatomic) NSString *leftTitle;
@property (nonatomic) double singleTagSpace;
@property (nonatomic) double singleTagLeftAndRightPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithsubTitlesArray:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
