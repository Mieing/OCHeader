@class NSString;

@interface QBCommonFileReq : QBJceObjectV2

@property (retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_0_r_sGUID;
@property (retain, nonatomic, getter=sQUA2, setter=setSQUA2:) NSString *jcev2_p_1_r_sQUA2;
@property (retain, nonatomic, getter=sModuleName, setter=setSModuleName:) NSString *jcev2_p_2_o_sModuleName;
@property (retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_3_o_sContentMd5;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
