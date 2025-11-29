@class NSData, NSHTTPURLResponse;

@interface GULURLSessionDataResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) NSData *HTTPBody;

- (id)initWithResponse:(id)a0 HTTPBody:(id)a1;
- (void).cxx_destruct;

@end
