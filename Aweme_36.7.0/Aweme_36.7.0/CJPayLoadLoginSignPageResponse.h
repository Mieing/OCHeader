@class CJPayLoginSignInformation, NSDictionary;

@interface CJPayLoadLoginSignPageResponse : CJPayQueryLoginInfoResponse

@property (retain, nonatomic) CJPayLoginSignInformation *signInformation;
@property (copy, nonatomic) NSDictionary *traceParams;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (long long)resultStatus;

@end
