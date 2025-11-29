@class NSString;

@interface CJPayUIComponentTextModel : JSONModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *bold;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *colorStr;
@property (nonatomic) long long fontSize;
@property (nonatomic) double width;
@property (nonatomic) double height;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)attributedStringFromModels:(id)a0 defaultFontSize:(double)a1 defaultColor:(id)a2;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
