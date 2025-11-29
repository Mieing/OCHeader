@class NSString;

@interface WXOpenCustomerServiceReq : BaseReq

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *corpid;

+ (id)object;

- (void).cxx_destruct;

@end
