@class NSNumber, NSString, RTVEffectGameResponseData;

@interface RTVEffectGameResponse : JSONModel

@property (retain, nonatomic) NSNumber *errorNumber;
@property (copy, nonatomic) NSString *errorTips;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) RTVEffectGameResponseData *data;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
