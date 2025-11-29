@interface AudioResampleConfig : NSObject

@property (nonatomic) BOOL isUseM4A;
@property (nonatomic) unsigned long long sampelRate;
@property (nonatomic) BOOL useSampleRateFromBusiness;

- (id)init;

@end
