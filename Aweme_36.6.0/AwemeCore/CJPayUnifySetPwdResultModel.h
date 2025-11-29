@class NSString, NSDictionary;

@interface CJPayUnifySetPwdResultModel : NSObject

@property (nonatomic) long long resultType;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *passwordContent;
@property (copy, nonatomic) NSDictionary *confirmParams;

- (void).cxx_destruct;
- (id)initWithResultType:(long long)a0;

@end
