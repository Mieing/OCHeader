@class NSString, NSNumber;

@interface AWEAdLightFeedBackSetViewStartAnimationTimeParamModel : BDXBridgeModel

@property (nonatomic) double height;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL disableAutoShow;
@property (retain, nonatomic) NSNumber *time;
@property (retain, nonatomic) NSNumber *milliSecond;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
