@interface ACCChapterPointsTimeLineAdjustState : NSObject

@property (nonatomic) double panBaseOffset;
@property (nonatomic) double panLeftEdgeThreshold;
@property (nonatomic) double panRightEdgeThreshold;
@property (nonatomic) double panTranslation;
@property (nonatomic) double panLocation;
@property (nonatomic) double panMoveSpeed;
@property (nonatomic) double panRightMaxOffset;
@property (nonatomic) double panLeftMaxOffset;
@property (nonatomic) double panOriginalLocation;
@property (nonatomic) double panOriginalWidth;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) BOOL isLimitLeftEdge;
@property (nonatomic) BOOL isLimitRightEdge;
@property (nonatomic) BOOL isReachLeftEdge;
@property (nonatomic) BOOL isReachRightEdge;

- (id)init;
- (void)reset;

@end
