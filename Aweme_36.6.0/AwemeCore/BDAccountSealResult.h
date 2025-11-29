@class NSString, NSDictionary;

@interface BDAccountSealResult : BDTuringVerifyResult

@property (nonatomic) long long resultCode;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) long long resultCode;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)conflictResult;
+ (id)unsupportResult;

- (void).cxx_destruct;
- (id)init;

@end
