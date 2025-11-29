@class NSMutableDictionary, UICollectionView, ACCRecordContainerMode, UIView, NSDictionary, NSString;
@protocol CECSwitchLengthViewDelegate;

@interface CECSwitchLengthView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (nonatomic) long long modeIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) NSMutableDictionary *subModesCellWidth;
@property (nonatomic) BOOL slided;
@property (weak, nonatomic) id<CECSwitchLengthViewDelegate> delegate;
@property (retain, nonatomic) ACCRecordContainerMode *containerMode;
@property (retain, nonatomic) NSDictionary *configs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (void)setModeIndex:(long long)a0 animated:(BOOL)a1;
- (void)setupModeConfig;
- (void)innerChangeWithMethod:(long long)a0 modeIndex:(long long)a1;
- (void)updateMode:(id)a0;
- (void)changeModeIndexTo:(long long)a0 withMethod:(long long)a1;
- (void)setModeIndex:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateMaskViewWithCurrentModeIndex:(long long)a0;
- (void)configCellWidth;
- (void)accessibilityChangeMode:(long long)a0;
- (void)tap:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)currentConfig;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pan:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)setupUI;
- (long long)cellCount;

@end
