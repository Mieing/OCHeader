@class NSString, IESECVideoMarketingRedPacketToastModel;

@interface IESECVideoMarketingRedPacketBannerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *amount;
@property (nonatomic) long long expiredTime;
@property (nonatomic) long long serverTime;
@property (retain, nonatomic) IESECVideoMarketingRedPacketToastModel *clickToast;
@property (nonatomic) long long serverLocalTimeDiff;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *benefitType;
@property (copy, nonatomic) NSString *trackParam;
@property (copy, nonatomic) NSString *clickSchema;
@property (copy, nonatomic) NSString *clickSchemaHalfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showCountDown;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
