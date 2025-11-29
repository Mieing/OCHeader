@class NSString;

@interface CJPayKeepDialogStandard : JSONModel

@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) long long fallbackWaitTimeMillis;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
