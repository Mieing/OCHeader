@class NSString;

@interface MttWkMachineceInfoByVerReq : QBJceObjectV2

@property (retain, nonatomic, getter=sSysVer, setter=setSSysVer:) NSString *jcev2_p_0_o_sSysVer;
@property (nonatomic, getter=b64, setter=setB64:) BOOL jcev2_p_1_o_b64;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
