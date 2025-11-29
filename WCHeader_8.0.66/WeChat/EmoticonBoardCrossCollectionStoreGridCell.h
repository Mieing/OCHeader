@class NSString, EmoticonBoardCrossCollectionStoreGridCellModel, EmoticonGridView;
@protocol EmoticonBoardCrossCollectionStoreGridCellDelegate;

@interface EmoticonBoardCrossCollectionStoreGridCell : UICollectionViewCell <EmoticonGridViewDelegate>

@property (retain, nonatomic) EmoticonGridView *gridView;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionStoreGridCellDelegate> delegsate;
@property (retain, nonatomic) EmoticonBoardCrossCollectionStoreGridCellModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideAllFocus;
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)onTapEmoticonWrap:(id)a0 atIndex:(long long)a1 gridView:(id)a2;
- (void)shouldShowEmoticonPreviewForWrap:(id)a0 atIndex:(long long)a1 withGridOffset:(struct CGPoint { double x0; double x1; })a2 description:(id)a3;
- (void)shouldHideEmoticonPreview;
- (void).cxx_destruct;

@end
