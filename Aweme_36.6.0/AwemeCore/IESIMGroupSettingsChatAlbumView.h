@class NSIndexPath, NSArray, UICollectionView, NSString, RxCollectionViewDiffableDataSource, UITapGestureRecognizer;
@protocol IESIMGroupSettingsChatAlbumViewDelegate;

@interface IESIMGroupSettingsChatAlbumView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEIMMediaDetailTransitionOuterContextProvider, UIGestureRecognizerDelegate>

@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (weak, nonatomic) id<IESIMGroupSettingsChatAlbumViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *itemViewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaDetailTransitionStartView;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)renderWithItemViewModels:(id)a0 animatingDifferences:(BOOL)a1;
- (void)p_configComponents;
- (void)p_applySnapShotWithItemViewModels:(id)a0 animatingDifferences:(BOOL)a1;
- (id /* block */)p_makeCellProvider;
- (void)p_didClickSelf;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
