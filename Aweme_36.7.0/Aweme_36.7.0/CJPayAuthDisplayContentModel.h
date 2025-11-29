@class NSString;

@interface CJPayAuthDisplayContentModel : JSONModel

@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *displayUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
