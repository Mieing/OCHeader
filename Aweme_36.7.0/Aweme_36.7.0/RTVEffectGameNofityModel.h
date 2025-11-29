@class NSNumber, RTVEffectGameResponseData;

@interface RTVEffectGameNofityModel : JSONModel

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) RTVEffectGameResponseData *data;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
