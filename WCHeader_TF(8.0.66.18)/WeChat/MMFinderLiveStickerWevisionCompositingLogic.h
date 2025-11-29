@interface MMFinderLiveStickerWevisionCompositingLogic : MMFinderLiveStickerCompositingLogic

- (unsigned long long)addStickerItem:(id)a0;
- (unsigned long long)insertStickerItemToBack:(id)a0;
- (unsigned long long)removeStickerItem:(id)a0;
- (unsigned long long)removeStickerItemWithId:(id)a0;
- (id)createWevisionWidgetWithSticker:(id)a0;
- (struct { double x0; double x1; struct CGVector { double x0; double x1; } x2; })transferStickerAffineTransformToWevisionTransform:(struct CGAffineTransformComponents { struct CGSize { double x0; double x1; } x0; double x1; double x2; struct CGVector { double x0; double x1; } x3; })a0;
- (struct CGSize { double x0; double x1; })transferNormalizedSizeFromStickerToWevision:(id)a0;

@end
