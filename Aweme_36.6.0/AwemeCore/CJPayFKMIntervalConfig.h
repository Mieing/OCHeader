@interface CJPayFKMIntervalConfig : JSONModel

@property (nonatomic) double codeAutoRefreshInterval;
@property (nonatomic) double codeStatusCheckInterval;
@property (nonatomic) double codeInitTimeoutInterval;
@property (nonatomic) double payTimeoutInterval;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
