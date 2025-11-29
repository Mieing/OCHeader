@class NSString;

@interface CJPayAssets : JSONModel

@property (copy, nonatomic) NSString *bgImage;
@property (copy, nonatomic) NSString *tipImage;
@property (copy, nonatomic) NSString *showImage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
