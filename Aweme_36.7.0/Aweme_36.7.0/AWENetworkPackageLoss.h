@interface AWENetworkPackageLoss : NSObject <NSCopying>

@property (nonatomic) double packageLossRate;
@property (nonatomic) double packageLossRateUpStream;
@property (nonatomic) double packageLossRateDownStream;
@property (nonatomic) double packageLossRateUpStreamVariance;
@property (nonatomic) double packageLossRateDownStreamVariance;

- (id)initWithUpLossRate:(double)a0 upLossRateVari:(double)a1 downLossRate:(double)a2 downLossRateVari:(double)a3;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
