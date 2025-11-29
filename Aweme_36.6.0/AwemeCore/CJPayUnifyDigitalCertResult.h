@class NSString, NSDictionary;

@interface CJPayUnifyDigitalCertResult : NSObject

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *oriErrorCode;
@property (copy, nonatomic) NSString *oriErrorMsg;
@property (copy, nonatomic) NSDictionary *data;

- (void).cxx_destruct;

@end
