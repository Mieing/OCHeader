@class NSString;

@interface AWENearbyActivityTextStyleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *gradientStartColor;
@property (copy, nonatomic) NSString *gradientEndColor;
@property (nonatomic) long long obliqueAngle;
@property (nonatomic) long long outerStrokeWidth;
@property (copy, nonatomic) NSString *outerStrokeColor;
@property (nonatomic) long long gradientDirection;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
