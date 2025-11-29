@class NSString;

@interface CJPayRetainContactInfo : JSONModel

@property (copy, nonatomic) NSString *process;
@property (copy, nonatomic) NSString *function;
@property (copy, nonatomic) NSString *behavior;
@property (copy, nonatomic) NSString *userState;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
