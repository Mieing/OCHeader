@class NSDictionary, NSString;

@interface QBCommonFileRsp : QBJceObjectV2

@property (retain, nonatomic, getter=mCommonFile, setter=setMCommonFile:) NSDictionary *jcev2_p_0_o_mCommonFile__b0x9i_M09ONSStringVOQBCommonFileInfo;
@property (retain, nonatomic, getter=sModuleName, setter=setSModuleName:) NSString *jcev2_p_1_o_sModuleName;
@property (retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
