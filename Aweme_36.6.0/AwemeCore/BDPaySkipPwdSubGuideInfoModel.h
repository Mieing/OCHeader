@class NSString;

@interface BDPaySkipPwdSubGuideInfoModel : JSONModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
