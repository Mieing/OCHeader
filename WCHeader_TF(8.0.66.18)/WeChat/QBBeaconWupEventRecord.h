@class NSString;

@interface QBBeaconWupEventRecord : QBJceObjectV2

@property (retain, nonatomic, getter=apn, setter=setApn:) NSString *jcev2_p_0_o_apn;
@property (retain, nonatomic, getter=srcIp, setter=setSrcIp:) NSString *jcev2_p_1_o_srcIp;
@property (retain, nonatomic, getter=eventName, setter=setEventName:) NSString *jcev2_p_2_o_eventName;
@property (nonatomic, getter=eventResult, setter=setEventResult:) BOOL jcev2_p_3_r_eventResult;
@property (nonatomic, getter=packageSize, setter=setPackageSize:) long long jcev2_p_4_r_packageSize;
@property (nonatomic, getter=cosumeTime, setter=setCosumeTime:) long long jcev2_p_5_r_cosumeTime;
@property (retain, nonatomic, getter=eventValue, setter=setEventValue:) NSString *jcev2_p_6_o_eventValue;
@property (nonatomic, getter=eventTime, setter=setEventTime:) long long jcev2_p_7_r_eventTime;
@property (nonatomic, getter=eventType, setter=setEventType:) int jcev2_p_8_r_eventType;

+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
