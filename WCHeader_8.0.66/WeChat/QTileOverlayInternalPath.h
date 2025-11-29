@interface QTileOverlayInternalPath : NSObject

@property (nonatomic) long long x;
@property (nonatomic) long long y;
@property (nonatomic) long long z;
@property (nonatomic) int language;

- (id)initWithBitmapTileID:(struct MapBitmapTileID { int x0; int x1; int x2; char x3[256]; } *)a0;

@end
