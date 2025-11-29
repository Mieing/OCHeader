@class NSString;

@interface BDTuringIdentityResult : BDTuringVerifyResult

@property (nonatomic) long long identityAuthCode;
@property (nonatomic) long long livingDetectCode;
@property (nonatomic) long long serverCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *ticket;

+ (id)conflictResult;
+ (id)unsupportResult;
+ (id)identyErrorResult;
+ (id)identyOKResult;

- (void).cxx_destruct;

@end
