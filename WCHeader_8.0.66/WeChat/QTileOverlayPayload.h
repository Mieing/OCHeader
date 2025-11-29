@interface QTileOverlayPayload : NSObject

@property (nonatomic) BOOL isHighResoultionTile;
@property (nonatomic) int maxDataLevel;
@property (nonatomic) int minDataLevel;
@property (nonatomic) int zIndex;
@property (nonatomic) int minVisibleLevel;
@property (nonatomic) int maxVisibleLevel;
@property (nonatomic) BOOL toSetVisibleLevel;

@end
