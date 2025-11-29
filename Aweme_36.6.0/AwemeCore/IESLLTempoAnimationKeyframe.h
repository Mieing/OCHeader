@class NSString, NSArray;

@interface IESLLTempoAnimationKeyframe : NSObject

@property (nonatomic) float keyTime;
@property (nonatomic) float opacity;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *timingFunction;
@property (retain, nonatomic) NSArray *transforms;

- (void).cxx_destruct;

@end
