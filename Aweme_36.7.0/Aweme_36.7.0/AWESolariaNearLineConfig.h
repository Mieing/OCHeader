@class NSArray, NSDictionary;

@interface AWESolariaNearLineConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long coldDelay;
@property (nonatomic) long long warmDelay;
@property (nonatomic) long long interval;
@property (nonatomic) long long offPeak;
@property (retain, nonatomic) NSArray *offPeakSupport;
@property (retain, nonatomic) NSArray *extraSupport;
@property (retain, nonatomic) NSDictionary *extraFeatureList;
@property (retain, nonatomic) NSDictionary *extraIESFeatureConfig;
@property (retain, nonatomic) NSDictionary *extraAdFeatureConfig;

- (void).cxx_destruct;

@end
