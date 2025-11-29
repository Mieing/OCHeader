@class NSArray;

@interface CJPayForceHttpsModel : JSONModel

@property (nonatomic) BOOL forceHttpsEnable;
@property (copy, nonatomic) NSArray *allowHttpList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
