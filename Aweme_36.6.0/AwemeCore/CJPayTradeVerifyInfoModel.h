@class NSString;

@interface CJPayTradeVerifyInfoModel : JSONModel

@property (copy, nonatomic) NSString *pwdCheckWay;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
