@class NSArray, QBWupUserBase, NSString;

@interface QBRouteIpListReq : QBJceObjectV2

@property (retain, nonatomic, getter=stUB, setter=setStUB:) QBWupUserBase *jcev2_p_0_r_stUB;
@property (retain, nonatomic, getter=vIPType, setter=setVIPType:) NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber;
@property (retain, nonatomic, getter=sTypeName, setter=setSTypeName:) NSString *jcev2_p_2_o_sTypeName;
@property (nonatomic, getter=iSubType, setter=setISubType:) int jcev2_p_3_o_iSubType;
@property (retain, nonatomic, getter=sExtraInfo, setter=setSExtraInfo:) NSString *jcev2_p_4_o_sExtraInfo;
@property (retain, nonatomic, getter=sMCCMNC, setter=setSMCCMNC:) NSString *jcev2_p_5_o_sMCCMNC;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
