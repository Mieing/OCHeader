@class WAEJTexture;

@interface WAEJCanvasContext2DTexture : WAEJCanvasContext2D {
    WAEJTexture *texture;
}

@property (readonly, nonatomic) WAEJTexture *texture;

- (void)dealloc;
- (void)resizeToWidth:(short)a0 height:(short)a1;
- (id)getTexture;

@end
