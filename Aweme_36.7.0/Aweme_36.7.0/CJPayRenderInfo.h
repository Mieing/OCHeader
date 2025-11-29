@class NSString;

@interface CJPayRenderInfo : JSONModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *h5Url;
@property (copy, nonatomic) NSString *lynxUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
