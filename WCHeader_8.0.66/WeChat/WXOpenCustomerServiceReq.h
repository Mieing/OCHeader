@class NSString, NSData;

@interface WXOpenCustomerServiceReq : BaseReq

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSData *corpid;

+ (id)object;

- (void).cxx_destruct;

@end
