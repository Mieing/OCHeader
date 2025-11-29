@class NSData, NSString;

@interface QBBeaconWupResponsePackage : QBJceObjectV2

@property (nonatomic, getter=result, setter=setResult:) char jcev2_p_0_r_result;
@property (nonatomic, getter=cmd, setter=setCmd:) int jcev2_p_1_r_cmd;
@property (retain, nonatomic, getter=sBuffer, setter=setSBuffer:) NSData *jcev2_p_2_o_sBuffer;
@property (retain, nonatomic, getter=srcGatewayIp, setter=setSrcGatewayIp:) NSString *jcev2_p_3_o_srcGatewayIp;
@property (nonatomic, getter=encryType, setter=setEncryType:) char jcev2_p_4_r_encryType;
@property (nonatomic, getter=zipType, setter=setZipType:) char jcev2_p_5_r_zipType;
@property (nonatomic, getter=serverTime, setter=setServerTime:) long long jcev2_p_6_r_serverTime;
@property (retain, nonatomic, getter=encryKey, setter=setEncryKey:) NSString *jcev2_p_7_o_encryKey;
@property (retain, nonatomic, getter=encryPublicKey, setter=setEncryPublicKey:) NSString *jcev2_p_8_o_encryPublicKey;

+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
