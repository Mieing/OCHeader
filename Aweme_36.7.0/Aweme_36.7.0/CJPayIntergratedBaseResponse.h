@class NSString;

@interface CJPayIntergratedBaseResponse : JSONModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *errorType;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *innerMsg;
@property (copy, nonatomic) NSString *typecnt;
@property (copy, nonatomic) NSString *errorData;
@property (copy, nonatomic) NSString *processStr;
@property (nonatomic) double responseDuration;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicMapperWith:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
