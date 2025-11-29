@class NSData;

@interface QBGuidRsp : QBJceObjectV2

@property (retain, nonatomic, getter=vGuid, setter=setVGuid:) NSData *jcev2_p_0_o_vGuid;
@property (retain, nonatomic, getter=vValidation, setter=setVValidation:) NSData *jcev2_p_1_o_vValidation;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
