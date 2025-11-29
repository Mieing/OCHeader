@class NSString;

@interface AWESiriDonationFrequencyLimitConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useDynamicLimit;
@property (nonatomic) long long calculationDays;
@property (nonatomic) double reductionRatio;
@property (nonatomic) long long upperBound;
@property (nonatomic) long long lowerBound;
@property (nonatomic) long long avgDonationInDays;
@property (nonatomic) BOOL asyncWriteRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
