@class NSArray;

@interface QTrailLineStyle : NSObject

@property (nonatomic) int animationStartTime;
@property (nonatomic) int animationEndTime;
@property (nonatomic) int lineType;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) int highlightDuration;
@property (nonatomic) double animateRatio;
@property (nonatomic) double width;

- (id)init;
- (void)setAnimationStartTime:(int)a0 animationEndTime:(int)a1;
- (void).cxx_destruct;

@end
