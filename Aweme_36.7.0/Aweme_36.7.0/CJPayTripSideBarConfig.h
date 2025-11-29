@class NSString;

@interface CJPayTripSideBarConfig : JSONModel

@property (nonatomic) BOOL enableAMapPreRender;
@property (copy, nonatomic) NSString *aMapPreRenderSchema;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
