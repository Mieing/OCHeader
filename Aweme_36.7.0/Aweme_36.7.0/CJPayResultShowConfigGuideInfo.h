@class NSString;

@interface CJPayResultShowConfigGuideInfo : JSONModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *type;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isShowText;
- (void).cxx_destruct;

@end
