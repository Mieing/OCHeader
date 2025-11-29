@interface AWEInteractionRedPacketStickerLocationModel : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) struct CGPoint { double x; double y; } leftTopPoint;
@property (nonatomic) struct CGPoint { double x; double y; } leftBottomPoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightTopPoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightBottomPoint;

- (BOOL)checkTrackArrayValid:(id)a0;
- (struct CGPoint { double x0; double x1; })configCoordinates:(id)a0;
- (BOOL)checkTrackPointValid:(id)a0;
- (id)initWithMeta:(id)a0 withBaseTime:(double)a1 withStartTime:(double)a2 withTrackFileNewType:(BOOL)a3;

@end
