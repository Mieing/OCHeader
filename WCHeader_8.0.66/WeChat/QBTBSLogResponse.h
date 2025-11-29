@class NSString;

@interface QBTBSLogResponse : QBJceObjectV2

@property (nonatomic, getter=eRet, setter=setERet:) long long jcev2_p_0_r_eRet;
@property (retain, nonatomic, getter=sMsg, setter=setSMsg:) NSString *jcev2_p_1_o_sMsg;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
