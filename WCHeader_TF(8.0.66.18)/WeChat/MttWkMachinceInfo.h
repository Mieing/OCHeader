@class NSString;

@interface MttWkMachinceInfo : QBJceObjectV2

@property (retain, nonatomic, getter=phoneID, setter=setPhoneID:) NSString *jcev2_p_0_r_phoneID;
@property (nonatomic, getter=is64os, setter=setIs64os:) BOOL jcev2_p_1_o_is64os;
@property (retain, nonatomic, getter=segName, setter=setSegName:) NSString *jcev2_p_2_o_segName;
@property (retain, nonatomic, getter=sectionName, setter=setSectionName:) NSString *jcev2_p_3_o_sectionName;
@property (nonatomic, getter=offset, setter=setOffset:) long long jcev2_p_4_o_offset;
@property (retain, nonatomic, getter=rootMemory, setter=setRootMemory:) NSString *jcev2_p_5_o_rootMemory;
@property (nonatomic, getter=checkOffset, setter=setCheckOffset:) long long jcev2_p_6_o_checkOffset;
@property (retain, nonatomic, getter=checkClass, setter=setCheckClass:) NSString *jcev2_p_7_o_checkClass;
@property (retain, nonatomic, getter=checkMethod, setter=setCheckMethod:) NSString *jcev2_p_8_o_checkMethod;

+ (void)initialize;
+ (id)jceType;

- (id)init;
- (void).cxx_destruct;

@end
