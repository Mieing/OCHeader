@class NSNumber;

@interface CJPaySecurityLockConfig : JSONModel

@property (copy, nonatomic) NSNumber *queryInterval;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
