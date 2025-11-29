@class NSString, NSDictionary;

@interface BDTuringVerifyResult : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *mobile;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *decision;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *x_tt_token;

+ (id)okResult;
+ (id)failResult;
+ (id)conflictResult;
+ (id)unsupportResult;
+ (id)noCaptchaCollectResult;

- (void).cxx_destruct;

@end
