@class NSString;

@interface IESECSKULimitModel : IESECBaseApiModel

@property (nonatomic) long long maxUserLimit;
@property (nonatomic) unsigned long long minUserLimit;
@property (copy, nonatomic) NSString *maxlimitToast;
@property (copy, nonatomic) NSString *minLimitToast;
@property (copy, nonatomic) NSString *limitText;
@property (copy, nonatomic) NSString *limitType;
@property (copy, nonatomic) NSString *orderURL;
@property (nonatomic) BOOL closeHalfSKU;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
