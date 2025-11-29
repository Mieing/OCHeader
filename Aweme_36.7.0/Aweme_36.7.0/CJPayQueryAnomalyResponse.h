@class NSString;

@interface CJPayQueryAnomalyResponse : JSONModel

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *logid;
@property (copy, nonatomic) NSString *message;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
