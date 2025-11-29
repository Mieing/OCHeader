@class NSArray, UICollectionView, NSString, UIView, UIPanGestureRecognizer, NSIndexPath;
@protocol AWEKnowledgeAlbumPreviewViewDelegate;

@interface AWEKnowledgeAlbumPreviewView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *imageModelsArray;
@property (retain, nonatomic) UIView *leftGradientView;
@property (retain, nonatomic) UIView *rightGradientView;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL hasExceedsMaximumWidth;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) struct CGPoint { double x; double y; } initialPoint;
@property (weak, nonatomic) id<AWEKnowledgeAlbumPreviewViewDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadFullPageFeedAdapterClass;

- (void)scrollToIndex:(long long)a0;
- (void)updateMaxWidth:(double)a0;
- (id)aAWEPadFullPageFeedAdapter;
- (void)p_setupViews;
- (void)p_scrollPreviewToIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)p_selectItemAtIndexPath:(id)a0;
- (void)p_updateSelectedItemWithIndexPath:(id)a0 isSelected:(BOOL)a1;
- (void)setupGradientLayerWithDirection:(BOOL)a0 view:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)addObserver;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)updateColor;
- (void)updateWithModel:(id)a0;
- (id)currentModel;

@end
