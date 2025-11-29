@class NSString, NSNumber, NSDictionary;

@interface IESAccountPassportSendCodeResponseModel : IESAccountPassportResponseModel

@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *retryTime;
@property (copy, nonatomic) NSString *nextURL;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSDictionary *requestParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
