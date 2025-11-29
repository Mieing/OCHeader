@interface CJPayUploadMediaConfig : JSONModel

@property (nonatomic) long long defaultMaxSize;
@property (nonatomic) long long defaultMaxResolution;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
