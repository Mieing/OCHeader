@class NSString;

@interface CJPayComponentShowPositionModel : JSONModel

@property (copy, nonatomic) NSString *payAndXPositionString;
@property (nonatomic) long long payAndXPosition;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
