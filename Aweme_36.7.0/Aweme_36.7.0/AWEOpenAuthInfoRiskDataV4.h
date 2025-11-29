@class NSString;

@interface AWEOpenAuthInfoRiskDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoRiskDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *riskTypeStr;
@property (copy, nonatomic) NSString *riskAddress;
@property (copy, nonatomic) NSString *riskPhone;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
