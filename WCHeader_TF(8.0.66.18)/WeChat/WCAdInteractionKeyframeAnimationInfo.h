@class NSArray;

@interface WCAdInteractionKeyframeAnimationInfo : WCAdInteractionAnimationInfo

@property (retain, nonatomic) NSArray *timingFunctions;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSArray *keyTimes;
@property (nonatomic) double repeatCount;
@property (nonatomic) BOOL remainPreviousAnimation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
