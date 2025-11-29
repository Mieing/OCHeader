@class NSString, IESECLiveCardProductInfoBasic, IESECLiveCardProductInfoBizExtendParam;

@interface IESECLiveCardProductInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveCardProductInfoBasic *basic;
@property (copy, nonatomic) NSString *promotionID;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *bizIdentity;
@property (retain, nonatomic) IESECLiveCardProductInfoBizExtendParam *bizExtendParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicJSONTransformer;
+ (id)bizExtendParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
