@class CAMediaTimingFunction;

@interface DUXSheetAnimationModel : NSObject

@property (nonatomic) BOOL enableSpringAnimation;
@property (nonatomic) double springAnimationDamping;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAMediaTimingFunction *animationFunction;
@property (nonatomic) BOOL disableShowAnimation;

- (void).cxx_destruct;

@end
