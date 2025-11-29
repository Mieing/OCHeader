@interface CECMCEditNLEHelper : NSObject

+ (id)makeVideoSegmentWithImage:(id)a0 path:(id)a1 duration:(double)a2;
+ (id)createNLEInterface;
+ (void)addNLEMainVideoOrImageResources:(id)a0 WithNLEInterface:(id)a1 completion:(id /* block */)a2;
+ (void)addImageStickerSlot:(id)a0 WithNLEInterface:(id)a1 completion:(id /* block */)a2;
+ (void)removeTextStickerFromNLE:(id)a0 completion:(id /* block */)a1;
+ (void)setCanvasSize:(struct CGSize { double x0; double x1; })a0 WithNLEInterface:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isNLEContainMainTrack:(id)a0;
+ (id)getCanvasColorFromtNLE:(id)a0;
+ (void)cropNLEMainVideoResources:(id)a0 WithNLEInterface:(id)a1 leftTopPoint:(struct CGPoint { double x0; double x1; })a2 rightBottomPoint:(struct CGPoint { double x0; double x1; })a3 completion:(id /* block */)a4;

@end
