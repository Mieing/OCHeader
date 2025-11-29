@interface VEBrushStickerInfo : NSObject

@property (nonatomic) int undoCount;
@property (nonatomic) int redoCount;
@property (nonatomic) double strokeSize;
@property (nonatomic) double boundingLeft;
@property (nonatomic) double boundingTop;
@property (nonatomic) double boundingRight;
@property (nonatomic) double boundingBottom;
@property (nonatomic) double memCacheSize;
@property (nonatomic) double totalCacheSize;

@end
