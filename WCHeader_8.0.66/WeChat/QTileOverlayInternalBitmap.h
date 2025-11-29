@class UIImage, NSURL;

@interface QTileOverlayInternalBitmap : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct TMBitmapContext { int x0; int x1; int x2; int x3; int x4; float x5; int x6; void *x7; char *x8[1]; } *bitmap;

- (void).cxx_destruct;

@end
