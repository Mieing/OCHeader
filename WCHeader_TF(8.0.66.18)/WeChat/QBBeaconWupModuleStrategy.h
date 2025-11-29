@class NSString, NSDictionary, NSArray;

@interface QBBeaconWupModuleStrategy : QBJceObjectV2

@property (nonatomic, getter=mId, setter=setMId:) char jcev2_p_0_r_mId;
@property (nonatomic, getter=onOff, setter=setOnOff:) char jcev2_p_1_r_onOff;
@property (retain, nonatomic, getter=url, setter=setUrl:) NSString *jcev2_p_2_o_url;
@property (retain, nonatomic, getter=detail, setter=setDetail:) NSDictionary *jcev2_p_3_o_detail__b0x9i_M09ONSStringONSString;
@property (retain, nonatomic, getter=preventEventCode, setter=setPreventEventCode:) NSArray *jcev2_p_4_o_preventEventCode__b0x9i_VONSString;
@property (retain, nonatomic, getter=sampleEvent, setter=setSampleEvent:) NSArray *jcev2_p_6_o_sampleEvent__b0x9i_VONSString;

+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
