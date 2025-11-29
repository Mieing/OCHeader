@interface AWEIMAudioPowerLevels : NSObject

@property (nonatomic) float average;
@property (nonatomic) float peak;

+ (id)levelsWithAverage:(float)a0 peak:(float)a1;

@end
