@class NSString;

@interface CJPayFalconHtmlConfigModel : JSONModel

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *file;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
