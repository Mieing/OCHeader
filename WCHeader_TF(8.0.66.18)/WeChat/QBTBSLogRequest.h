@class NSString;

@interface QBTBSLogRequest : QBJceObjectV2

@property (retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_0_r_sGUID;
@property (retain, nonatomic, getter=sStr, setter=setSStr:) NSString *jcev2_p_1_r_sStr;
@property (retain, nonatomic, getter=sRandomKey, setter=setSRandomKey:) NSString *jcev2_p_2_o_sRandomKey;
@property (retain, nonatomic, getter=sBusinessID, setter=setSBusinessID:) NSString *jcev2_p_3_o_sBusinessID;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
