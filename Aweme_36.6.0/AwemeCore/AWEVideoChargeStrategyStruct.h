@class NSNumber, NSString;

@interface AWEVideoChargeStrategyStruct : AWEBaseApiModel

@property (nonatomic) BOOL supportSegmentUnlock;
@property (retain, nonatomic) NSNumber *totalPrice;
@property (nonatomic) long long chargeStyle;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (nonatomic) long long discounThreshold;
@property (retain, nonatomic) NSNumber *hasPaidEpisodes;
@property (retain, nonatomic) NSNumber *minimumDiscount;
@property (retain, nonatomic) NSNumber *unlockCount;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
