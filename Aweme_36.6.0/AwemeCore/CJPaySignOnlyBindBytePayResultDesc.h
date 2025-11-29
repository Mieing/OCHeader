@class NSString;

@interface CJPaySignOnlyBindBytePayResultDesc : JSONModel

@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSString *signStatusDesc;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *signFailReason;
@property (copy, nonatomic) NSString *signStatus;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
