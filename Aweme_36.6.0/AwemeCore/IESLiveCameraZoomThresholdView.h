@class NSArray, NSString, UICollectionView;
@protocol IESLiveAnchorPanelTabViewDelegate;

@interface IESLiveCameraZoomThresholdView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *defalutFactorArray;
@property (retain, nonatomic) NSArray *currentFactorArray;
@property (weak, nonatomic) id<IESLiveAnchorPanelTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithfactorArray:(id)a0 currentZoomFactor:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setSelect:(unsigned long long)a0;
- (void)setupCollectionView;

@end
