@class MMLiveKtvThemeItem, NSArray, UICollectionView, MMFinderLiveTaskId, UICollectionViewFlowLayout, NSString, UIButton;

@interface MMLiveKtvThemesSelectionPageSheet : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSArray *themes;
@property (retain, nonatomic) MMLiveKtvThemeItem *selectedTheme;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 themes:(id)a1 selectedTheme:(id)a2;
- (void)layoutSubviews;
- (void)onConfirmed;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)initializeComponents;
- (struct CGSize { double x0; double x1; })cellSize;
- (double)collectionHeight;
- (id)liveTask;
- (void).cxx_destruct;

@end
