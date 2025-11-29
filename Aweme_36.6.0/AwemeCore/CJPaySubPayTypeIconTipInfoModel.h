@class NSString;

@interface CJPaySubPayTypeIconTipInfoModel : JSONModel

@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *subContent;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
