@class NSArray, NSString, NSDictionary;

@interface QBBeaconWupCommonStrategy : QBJceObjectV2

@property (retain, nonatomic, getter=moduleList, setter=setModuleList:) NSArray *jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy;
@property (nonatomic, getter=queryInterval, setter=setQueryInterval:) int jcev2_p_1_r_queryInterval;
@property (retain, nonatomic, getter=url, setter=setUrl:) NSString *jcev2_p_2_o_url;
@property (retain, nonatomic, getter=cloudParas, setter=setCloudParas:) NSDictionary *jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString;

+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
