@class NSMutableArray;

@interface EmoticonCustomEditImageLayoutView : WCEditImageLayoutView

@property (nonatomic) BOOL hasCroped;
@property (nonatomic) BOOL hasAddText;
@property (nonatomic) BOOL hasDeleteAsset;
@property (retain, nonatomic) NSMutableArray *assetsEditTracker;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSelectedCollectionView;
- (void)initTopEditImageBar;
- (void)initSelectBtn;
- (void)OnSelectedButtonClicked:(id)a0;
- (void)deleteCrtAsset:(unsigned long long)a0 sender:(id)a1;
- (void)initNextBtn;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (void)initGifImageView;
- (void)onClickItemFromIndex:(long long)a0 toIndex:(long long)a1 completion:(id /* block */)a2;
- (void)onMoveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)confirmEditText:(id)a0 withColor:(id)a1 style:(unsigned long long)a2 backgroundColor:(id)a3;
- (void)onCropDone;
- (BOOL)currentImageFirstToSquare;
- (void)OnClickEditImageBackBarButton;
- (void)OnCancel;
- (void)OnClickEditImageDoneBarButton;
- (void)endEditImageView;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)onTextEditImage:(id)a0;
- (void)onCropEditImage:(id)a0;
- (void)doActionTraceWithType:(unsigned long long)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;

@end
