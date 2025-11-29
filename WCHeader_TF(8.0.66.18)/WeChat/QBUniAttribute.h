@class NSMutableDictionary;

@interface QBUniAttribute : QBJceObjectV2

@property (retain, nonatomic, getter=jce_uniAttributes, setter=setJce_uniAttributes:) NSMutableDictionary *jcev2_p_0_r_uniAttributes__b0x9i_M09ONSStringM09ONSStringONSData;

+ (id)fromAttributeData:(id)a0;

- (id)init;
- (void)dealloc;
- (id)attributeData;
- (id)attrValueWithName:(id)a0 andType:(id)a1;
- (void)setAttrValue:(id)a0 withName:(id)a1 andType:(id)a2;
- (void).cxx_destruct;

@end
