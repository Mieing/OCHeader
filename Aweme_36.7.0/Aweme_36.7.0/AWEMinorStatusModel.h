@class NSNumber, AWETeenModeAlertConfigModel;

@interface AWEMinorStatusModel : AWEBaseApiModel

@property (retain, nonatomic) AWETeenModeAlertConfigModel *windowConfig;
@property (nonatomic) BOOL minorMode;
@property (nonatomic) long long minorModeType;
@property long long screenTime;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasPassword;
@property (nonatomic) BOOL hasPhoneNumber;
@property (nonatomic) BOOL isOversea;
@property (retain, nonatomic) NSNumber *enterFourTeenModeTS;

+ (id)windowConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
