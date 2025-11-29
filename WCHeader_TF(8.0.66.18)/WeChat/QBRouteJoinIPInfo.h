@class NSArray;

@interface QBRouteJoinIPInfo : QBJceObjectV2

@property (nonatomic, getter=eIPType, setter=setEIPType:) long long jcev2_p_0_o_eIPType;
@property (retain, nonatomic, getter=vIPList, setter=setVIPList:) NSArray *jcev2_p_1_o_vIPList__b0x9i_VONSString;
@property (nonatomic, getter=iTotalPollNum, setter=setITotalPollNum:) int jcev2_p_2_o_iTotalPollNum;
@property (nonatomic, getter=iLifePeriod, setter=setILifePeriod:) int jcev2_p_3_o_iLifePeriod;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
