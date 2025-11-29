@class UIFont, NSArray, UIImageView, UICollectionView, NSString;

@interface AWEProfileWaterfallPreviewView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEProfileCollectionViewDelegateWaterfallLayout, AWEUserProfileLayoutPreviewViewProtocol>

@property (retain, nonatomic) UICollectionView *postCollectionView;
@property (copy, nonatomic) NSArray *postList;
@property (nonatomic) BOOL useWaterfallLayout;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIImageView *postCollectionSnapImageView;
@property (nonatomic) BOOL showCreateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createFlowLayout;
- (void)switchLayout:(BOOL)a0 animated:(BOOL)a1;
- (id)createWaterfallLayout;
- (id)postWorkDataManager;
- (id)mockPostList;
- (struct CGSize { double x0; double x1; })titleSize:(id)a0 cellWidth:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showWaterfall:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
