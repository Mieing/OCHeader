@class NSString;

@interface DYAUpsmsQueryVerifyModel : DYAPassportResponseModel

@property (copy, nonatomic) NSString *mobileLoginTicket;
@property (copy, nonatomic) NSString *resultAction;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isPollingSuccess;
- (void).cxx_destruct;
- (BOOL)shouldRetry;

@end
