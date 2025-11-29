@class NSURLRequest, NSURL;

@interface QBDNSQueryItem : NSObject

@property (retain) NSURLRequest *dnsRequest;
@property (copy) NSURL *originURL;
@property long long status;
@property long long errCode;

- (void).cxx_destruct;

@end
