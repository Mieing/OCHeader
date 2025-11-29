@class NSString;

@interface CJPayQueryLoginExtsModel : JSONModel

@property (copy, nonatomic) NSString *loginStyle;
@property (copy, nonatomic) NSString *themeId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicDict;

- (void).cxx_destruct;

@end
