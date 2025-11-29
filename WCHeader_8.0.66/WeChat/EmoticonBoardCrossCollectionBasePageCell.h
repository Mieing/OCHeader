@class EmoticonBoardCrossSectionInfo, NSString, UICollectionViewFlowLayout, MMLoadMoreCollectionView, UIView;
@protocol EmoticonBoardCrossCollectionBasePageDelegate;

@interface EmoticonBoardCrossCollectionBasePageCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MMLoadMoreCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UIView *topMaskView;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionBasePageDelegate> delegate;
@property (retain, nonatomic) EmoticonBoardCrossSectionInfo *sectionInfo;
@property (nonatomic) BOOL darkMode;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPageOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (unsigned long long)maximumNumberOfItemsInRow;
- (id)collectionViewLayout;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;

@end
