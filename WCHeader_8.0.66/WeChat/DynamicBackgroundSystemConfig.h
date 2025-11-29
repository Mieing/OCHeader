@class NSMutableArray;

@interface DynamicBackgroundSystemConfig : NSObject

@property (nonatomic) unsigned int maxParticles;
@property (nonatomic) double minRadius;
@property (nonatomic) double maxRadius;
@property (nonatomic) double speed;
@property (nonatomic) double minAngle;
@property (nonatomic) double maxAngle;
@property (nonatomic) double minPositionX;
@property (nonatomic) double maxPositionX;
@property (nonatomic) double minPositionY;
@property (nonatomic) double maxPositionY;
@property (nonatomic) double opacity;
@property (nonatomic) unsigned int sideCount;
@property (nonatomic) unsigned int framePerSecond;
@property (nonatomic) double backgroundDuration;
@property (retain, nonatomic) NSMutableArray *colorConfigs;

- (BOOL)isCurrentTimeInDarkStyle;
- (void).cxx_destruct;

@end
