@class IESLiveRequestAnimationButton, NSString, IESLiveMultiOrderSingMVTabView, UICollectionView, UILabel, IESLiveMultiOrderSingMVPanelModel;

@interface IESLiveMultiOrderSingMVPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveMultiOrderSingMVPanelModel *model;
@property (retain, nonatomic) IESLiveMultiOrderSingMVTabView *tabView;
@property (retain, nonatomic) IESLiveRequestAnimationButton *actionButton;
@property (retain, nonatomic) UILabel *previewLabel;
@property (retain, nonatomic) UICollectionView *pageView;
@property (nonatomic) long long pageViewSelectedIndex;
@property (nonatomic) long long tabViewSelectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickActionButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)didClickPreviewLabel;
- (void)updateActionButtonWithLocked:(BOOL)a0 playing:(BOOL)a1 enable:(BOOL)a2;
- (id)createHighQualityLabelWithLocked:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;
- (void)addObservers;

@end
