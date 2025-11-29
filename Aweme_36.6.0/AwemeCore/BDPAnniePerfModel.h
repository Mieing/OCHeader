@class NSDictionary;

@interface BDPAnniePerfModel : NSObject

@property (copy, nonatomic) NSDictionary *setupTiming;
@property (copy, nonatomic) NSDictionary *extraTiming;
@property (copy, nonatomic) NSDictionary *updateTiming;
@property (copy, nonatomic) NSDictionary *metrics;
@property (nonatomic) long long fp;
@property (nonatomic) long long fmp;

- (void).cxx_destruct;

@end
