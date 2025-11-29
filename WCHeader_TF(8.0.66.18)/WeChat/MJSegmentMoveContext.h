@class CALayer;

@interface MJSegmentMoveContext : NSObject

@property (retain, nonatomic) CALayer *movingSegmentSnapshotLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } movingSegmentOriginalFrame;
@property (nonatomic) struct CGPoint { double x; double y; } movingSegmentOriginalLocation;
@property (nonatomic) struct CGPoint { double x; double y; } locationInMovingSnapshotLayer;
@property (nonatomic) struct CGPoint { double x; double y; } movingSegmentSnapshotOffset;

- (id)init;
- (void).cxx_destruct;

@end
