@class NSString;

@interface QBPreferencesReq : QBJceObjectV2

@property (nonatomic, getter=iReqTime, setter=setIReqTime:) int jcev2_p_0_r_iReqTime;
@property (retain, nonatomic, getter=sQUA, setter=setSQUA:) NSString *jcev2_p_1_o_sQUA;
@property (retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_2_o_sGUID;
@property (retain, nonatomic, getter=sQua2ExInfo, setter=setSQua2ExInfo:) NSString *jcev2_p_3_o_sQua2ExInfo;
@property (retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_4_o_sContentMd5;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
