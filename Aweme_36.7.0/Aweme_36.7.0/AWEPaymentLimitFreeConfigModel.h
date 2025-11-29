@interface AWEPaymentLimitFreeConfigModel : AWEBaseApiModel

@property (nonatomic) BOOL isInLimitFree;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

+ (id)JSONKeyPathsByPropertyKey;

@end
