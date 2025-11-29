@class NSString, NSData;

@interface QBGuidReq : QBJceObjectV2

@property (retain, nonatomic, getter=sQua, setter=setSQua:) NSString *jcev2_p_0_o_sQua;
@property (retain, nonatomic, getter=sImei, setter=setSImei:) NSString *jcev2_p_1_o_sImei;
@property (retain, nonatomic, getter=sImsi, setter=setSImsi:) NSString *jcev2_p_2_o_sImsi;
@property (retain, nonatomic, getter=sVenderId, setter=setSVenderId:) NSString *jcev2_p_3_o_sVenderId;
@property (retain, nonatomic, getter=sAdId, setter=setSAdId:) NSString *jcev2_p_4_o_sAdId;
@property (retain, nonatomic, getter=vValidation, setter=setVValidation:) NSData *jcev2_p_5_o_vValidation;
@property (nonatomic, getter=eRequestTriggeredType, setter=setERequestTriggeredType:) long long jcev2_p_6_o_eRequestTriggeredType;
@property (retain, nonatomic, getter=sMac, setter=setSMac:) NSString *jcev2_p_7_o_sMac;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
