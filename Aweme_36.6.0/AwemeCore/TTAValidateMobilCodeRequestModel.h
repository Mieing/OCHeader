@class NSString, NSDictionary;

@interface TTAValidateMobilCodeRequestModel : NSObject

@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *codeString;
@property (nonatomic) long long smsCodeType;
@property (nonatomic) BOOL needMix;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSDictionary *extraDic;

- (void).cxx_destruct;
- (id)init;

@end
