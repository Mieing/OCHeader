@class NSArray, NSString;

@interface QBPreferencesRsp : QBJceObjectV2

@property (nonatomic, getter=iRspTime, setter=setIRspTime:) int jcev2_p_0_r_iRspTime;
@property (retain, nonatomic, getter=vPreferencesKeyValue, setter=setVPreferencesKeyValue:) NSArray *jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue;
@property (retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
