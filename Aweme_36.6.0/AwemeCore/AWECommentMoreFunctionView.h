@class NSArray, NSDictionary, UICollectionView, NSString;

@interface AWECommentMoreFunctionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWECommentMoreFunctionViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) NSDictionary *commonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 models:(id)a1;
- (void)reloadModels;
- (void)reloadWithModels:(id)a0;
- (void)__setupUI;
- (void)trackOneFuctionClickWithModel:(id)a0;
- (BOOL)shouldShowYellowDotOnLuckyDraw;
- (void)trackOneFuntionShowWithModel:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)willShow;
- (void)willHide;

@end
