@class NSArray, NSString;

@interface QBRouteIpListRsp : QBJceObjectV2

@property (retain, nonatomic, getter=vIPInfos, setter=setVIPInfos:) NSArray *jcev2_p_0_r_vIPInfos__b0x9i_VOQBRouteJoinIPInfo;
@property (retain, nonatomic, getter=sApn, setter=setSApn:) NSString *jcev2_p_1_o_sApn;
@property (nonatomic, getter=bProxy, setter=setBProxy:) char jcev2_p_2_o_bProxy;
@property (retain, nonatomic, getter=sTypeName, setter=setSTypeName:) NSString *jcev2_p_3_o_sTypeName;
@property (nonatomic, getter=iSubType, setter=setISubType:) int jcev2_p_4_o_iSubType;
@property (retain, nonatomic, getter=sExtraInfo, setter=setSExtraInfo:) NSString *jcev2_p_5_o_sExtraInfo;
@property (retain, nonatomic, getter=sMCCMNC, setter=setSMCCMNC:) NSString *jcev2_p_6_o_sMCCMNC;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
