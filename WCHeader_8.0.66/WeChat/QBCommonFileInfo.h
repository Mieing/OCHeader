@class NSString;

@interface QBCommonFileInfo : QBJceObjectV2

@property (retain, nonatomic, getter=sFileName, setter=setSFileName:) NSString *jcev2_p_0_r_sFileName;
@property (retain, nonatomic, getter=sFileUrl, setter=setSFileUrl:) NSString *jcev2_p_1_r_sFileUrl;
@property (retain, nonatomic, getter=sFileContentMd5, setter=setSFileContentMd5:) NSString *jcev2_p_2_o_sFileContentMd5;
@property (retain, nonatomic, getter=sSignature, setter=setSSignature:) NSString *jcev2_p_3_o_sSignature;
@property (retain, nonatomic, getter=sEncryptAlgorithm, setter=setSEncryptAlgorithm:) NSString *jcev2_p_4_o_sEncryptAlgorithm;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
