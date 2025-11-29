@interface CJPayFKMBatchCodeConfig : JSONModel

@property (nonatomic) unsigned long long prefetchMinCount;
@property (nonatomic) unsigned long long prefetchMinInterval;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
