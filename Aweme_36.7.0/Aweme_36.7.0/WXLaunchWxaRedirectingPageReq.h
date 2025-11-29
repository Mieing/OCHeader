@class NSString, NSDictionary;

@interface WXLaunchWxaRedirectingPageReq : BaseReq

@property (copy, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSDictionary *extDict;

- (void).cxx_destruct;

@end
