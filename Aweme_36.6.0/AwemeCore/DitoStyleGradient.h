@class NSArray;

@interface DitoStyleGradient : NSObject

@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientLocations;
@property (copy, nonatomic) NSArray *gradientDirection;
@property (nonatomic) unsigned long long gradientDirectionMode;
@property (nonatomic) unsigned long long gradientRangeType;

- (void).cxx_destruct;

@end
