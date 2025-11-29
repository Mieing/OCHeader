@class NSString;

@interface CJPayBaseResponse : JSONModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *errorType;
@property (copy, nonatomic) NSString *typeContent;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) double callBackHighPriorityQueueTime;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *sign;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) double responseDuration;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)basicDict;
+ (id)keyMapperDict;

- (BOOL)isNeedThrottle;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
