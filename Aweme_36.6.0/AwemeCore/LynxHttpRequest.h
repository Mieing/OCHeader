@class NSString, NSData, NSDictionary;

@interface LynxHttpRequest : NSObject

@property (copy) NSString *httpMethod;
@property (copy) NSString *url;
@property (copy) NSString *originUrl;
@property (copy) NSData *httpBody;
@property (copy) NSDictionary *httpHeaders;
@property (copy) NSDictionary *customConfig;

- (void).cxx_destruct;

@end
