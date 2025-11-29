@class NSString;

@interface BDPayCombinePayShowInfo : JSONModel

@property (copy, nonatomic) NSString *combineType;
@property (copy, nonatomic) NSString *combineMsg;
@property (copy, nonatomic) NSString *expandCombineMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
