@class NSString, UICollectionView, AWEIMInputFAQListViewModel, UIView;
@protocol AWEIMInputActionBarDelegate;

@interface AWEIMInputActionBarFAQView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMInputActionBarProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMInputFAQListViewModel *viewModel;
@property (nonatomic, getter=isFilled) BOOL filled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) UIView *blurContentView;
@property (weak, nonatomic) id<AWEIMInputActionBarDelegate> delegate;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)refreshView;
- (void)p_setupViews;
- (void)p_refreshUIStyle;
- (void)replaceEntryItems:(id)a0 animated:(BOOL)a1;
- (void)reloadActionBar;
- (void)refreshVisiableCellsIfNeeded;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (unsigned long long)uiStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
