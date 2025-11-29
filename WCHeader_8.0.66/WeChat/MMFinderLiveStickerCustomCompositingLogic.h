@interface MMFinderLiveStickerCustomCompositingLogic : MMFinderLiveStickerCompositingLogic

+ (id)createVideoFrameWidgetWithSticker:(id)a0 sourceFrameSize:(struct CGSize { double x0; double x1; })a1 factor:(double)a2;
+ (struct CGSize { double x0; double x1; })getStickerFinalScale:(id)a0 sourceFrameSize:(struct CGSize { double x0; double x1; })a1 factor:(double)a2;

- (unsigned long long)addStickerItem:(id)a0;
- (unsigned long long)insertStickerItemToBack:(id)a0;
- (unsigned long long)removeStickerItem:(id)a0;
- (unsigned long long)removeStickerItemWithId:(id)a0;

@end
