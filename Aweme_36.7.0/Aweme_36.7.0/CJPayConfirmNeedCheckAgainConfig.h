@class NSArray, NSDictionary;

@interface CJPayConfirmNeedCheckAgainConfig : JSONModel

@property (copy, nonatomic) NSArray *merchantIds;
@property (copy, nonatomic) NSDictionary *alertContents;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
