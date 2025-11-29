@class NSNumber, NSString;

@interface AWEPassportSendCodeModel : DYAPassportResponseModel

@property (retain, nonatomic) NSNumber *retryTime;
@property (copy, nonatomic) NSString *nextURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
