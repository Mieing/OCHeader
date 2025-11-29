@class MttWkMachinceInfo;

@interface MttWkMachinceInfoRsp : QBJceObjectV2

@property (nonatomic, getter=rspCode, setter=setRspCode:) int jcev2_p_0_o_rspCode;
@property (retain, nonatomic, getter=stWkMachinceInfo, setter=setStWkMachinceInfo:) MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
