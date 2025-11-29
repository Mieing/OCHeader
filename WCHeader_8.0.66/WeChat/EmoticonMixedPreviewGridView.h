@class UIView, UILongPressGestureRecognizer, NSArray, UICollectionViewFlowLayout, NSString, EmoticonMixedPreviewGridViewConfig, EmoticonPreviewWindowViewController, UICollectionView, NSIndexPath;
@protocol EmoticonMixedPreviewGridViewDelegate, MMUIViewControllerDelegate;

@interface EmoticonMixedPreviewGridView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, EmoticonPreviewWindowViewControllerDelegate, EmoticonHalfScreenSendViewDelegate>

@property (retain, nonatomic) EmoticonMixedPreviewGridViewConfig *config;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *displayCellList;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) EmoticonPreviewWindowViewController *emoticonPreview;
@property (retain, nonatomic) UIView *colorMaskView;
@property (weak, nonatomic) id<EmoticonMixedPreviewGridViewDelegate, MMUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)layoutSubviews;
- (void)initSubViews;
- (void)updateConfig:(id)a0;
- (void)configGestureRecognizer;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (unsigned long long)maxEmojiCountForDesigner;
- (unsigned long long)maxPreviewCount;
- (void)onLongPressToPreview:(id)a0;
- (void)showPreview:(id)a0 description:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 index:(unsigned long long)a3;
- (void)hideEmoticonPreview;
- (BOOL)hasItemsToShow;
- (void)onFinishPreviewAndChangeToPid:(id)a0;
- (void)reportTouchForMD5:(id)a0 pid:(id)a1 selectionType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
