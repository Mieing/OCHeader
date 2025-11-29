@interface DVEVideoTrackPreviewPanState : NSObject

@property (nonatomic) double panBaseOffset;
@property (nonatomic) double panLeftEdgeThreshold;
@property (nonatomic) double panRightEdgeThreshold;
@property (nonatomic) double panTranslation;
@property (nonatomic) struct CGPoint { double x; double y; } panLocation;
@property (nonatomic) double panMoveSpeed;
@property (nonatomic) unsigned long long panPosition;
@property (nonatomic) double panRightMaxOffset;
@property (nonatomic) double panLeftMaxOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } panSegmentOriginalFrame;
@property (nonatomic) double panConetentOriginalOffset;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) BOOL isAttached;
@property (nonatomic) BOOL hasArrivedLimitation;
@property (nonatomic) double panRangeMin;
@property (nonatomic) double panRangeMax;

- (id)init;
- (void)reset;

@end
