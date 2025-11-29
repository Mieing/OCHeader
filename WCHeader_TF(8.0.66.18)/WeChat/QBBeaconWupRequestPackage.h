@class NSString, NSData;

@interface QBBeaconWupRequestPackage : QBJceObjectV2

@property (nonatomic, getter=platformId, setter=setPlatformId:) char jcev2_p_0_r_platformId;
@property (retain, nonatomic, getter=appkey, setter=setAppkey:) NSString *jcev2_p_1_o_appkey;
@property (retain, nonatomic, getter=appVersion, setter=setAppVersion:) NSString *jcev2_p_2_o_appVersion;
@property (retain, nonatomic, getter=sdkId, setter=setSdkId:) NSString *jcev2_p_3_o_sdkId;
@property (retain, nonatomic, getter=sdkVersion, setter=setSdkVersion:) NSString *jcev2_p_4_o_sdkVersion;
@property (nonatomic, getter=cmd, setter=setCmd:) int jcev2_p_5_r_cmd;
@property (retain, nonatomic, getter=sBuffer, setter=setSBuffer:) NSData *jcev2_p_6_o_sBuffer;
@property (nonatomic, getter=encryType, setter=setEncryType:) char jcev2_p_7_r_encryType;
@property (nonatomic, getter=zipType, setter=setZipType:) char jcev2_p_8_r_zipType;
@property (retain, nonatomic, getter=model, setter=setModel:) NSString *jcev2_p_9_o_model;
@property (retain, nonatomic, getter=osVersion, setter=setOsVersion:) NSString *jcev2_p_10_o_osVersion;
@property (retain, nonatomic, getter=reserved, setter=setReserved:) NSString *jcev2_p_11_o_reserved;

+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
