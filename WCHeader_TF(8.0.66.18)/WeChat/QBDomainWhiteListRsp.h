@class NSDictionary, NSString;

@interface QBDomainWhiteListRsp : QBJceObjectV2

@property (nonatomic, getter=iDomainTime, setter=setIDomainTime:) int jcev2_p_0_r_iDomainTime;
@property (retain, nonatomic, getter=mTypeDomain, setter=setMTypeDomain:) NSDictionary *jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString;
@property (retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
