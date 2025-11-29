@class NSString, UICollectionView, UICollectionViewFlowLayout, NSMutableArray;

@interface WCFinderMSInteractionView : UIView <UICollectionViewDataSource>

@property (nonatomic) double layoutWidth;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *interactionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithInteractionData:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
