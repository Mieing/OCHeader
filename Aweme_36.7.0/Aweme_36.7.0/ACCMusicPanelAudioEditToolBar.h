@class NSArray, UICollectionView, NSString, UIView;
@protocol ACCMusicPanelAudioEditToolBarDelegate;

@interface ACCMusicPanelAudioEditToolBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) BOOL isDarkTheme;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *line;
@property (weak, nonatomic) id<ACCMusicPanelAudioEditToolBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0 darkTheme:(BOOL)a1;
- (void)updateWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (double)cellWidth;
- (void)setupUI;

@end
