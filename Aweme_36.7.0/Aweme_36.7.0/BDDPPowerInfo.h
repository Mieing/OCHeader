@interface BDDPPowerInfo : NSObject

@property (nonatomic) int charge;
@property (nonatomic) int psm;
@property (nonatomic) int batLevel;
@property (nonatomic) int thermal;

- (id)init;

@end
