@class NSString, NSDictionary, NSData;

@interface LynxHttpResponse : NSObject

@property long long statusCode;
@property (copy) NSString *statusText;
@property (copy) NSDictionary *httpHeaders;
@property (copy) NSString *url;
@property (retain) NSData *httpBody;
@property (copy) NSDictionary *customInfo;

- (void).cxx_destruct;

@end
