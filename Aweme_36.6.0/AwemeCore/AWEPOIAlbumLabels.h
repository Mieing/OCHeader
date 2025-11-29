@class NSArray, UICollectionView, NSString, UIView;
@protocol AWEPOIAlbumLabelsViewDelegate, IESLLFusePOIDetailNGPageContextProtocol;

@interface AWEPOIAlbumLabels : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *labels;
@property (nonatomic) BOOL showMoreIcon;
@property (retain, nonatomic) UIView *moreLabelsContainer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long state;
@property (nonatomic) long long currentLabelIndex;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<IESLLFusePOIDetailNGPageContextProtocol> context;
@property (weak, nonatomic) id<AWEPOIAlbumLabelsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideShadow;
- (void)updateContentHeight:(unsigned char)a0;
- (void)showShadow;
- (void)setupLayer;
- (void)trackSwitchTab:(long long)a0 toIndex:(long long)a1;
- (void)scrollTargetIndexToCenter:(long long)a0;
- (BOOL)isSelectedLabel:(id)a0;
- (void)trackShowTab:(id)a0 index:(long long)a1;
- (void)didClickMoreButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labels:(id)a1 style:(long long)a2 tabIndex:(long long)a3;
- (double)labelsHeight;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setSelectedIndex:(long long)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)maxHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (void)setupUI;

@end
