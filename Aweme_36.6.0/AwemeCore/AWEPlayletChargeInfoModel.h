@class NSString, NSNumber;

@interface AWEPlayletChargeInfoModel : AWEBaseApiModel

@property (nonatomic) long long chargeType;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) long long chargeCount;
@property (nonatomic) long long sellType;
@property (nonatomic) long long unpaidCount;
@property (nonatomic) BOOL useDemotion;
@property (copy, nonatomic) NSString *buySchema;
@property (retain, nonatomic) NSNumber *promiseUpdateTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
