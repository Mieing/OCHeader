@class NSString, NSDictionary, NSURL, NSData, NSError;

@interface TMNetworkContext : NSObject

@property (nonatomic) unsigned long long contextType;
@property (copy, nonatomic) NSString *aspectType;
@property (copy, nonatomic) NSURL *requestUrl;
@property (copy, nonatomic) NSURL *responseUrl;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSDictionary *allHTTPRequestHeaderFields;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSData *HTTPBody;
@property (copy, nonatomic) NSDictionary *requestPassThroughInfo;
@property (copy, nonatomic) NSDictionary *allHTTPResponseHeaderFields;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSData *responseData;
@property (copy, nonatomic) NSError *responseError;
@property (copy, nonatomic) NSDictionary *responsePassThroughInfo;
@property (nonatomic) BOOL hasModified;

+ (id)contextFromRequest:(id)a0;
+ (id)contextFromResponse:(id)a0;

- (id)valueForHTTPRequestHeaderField:(id)a0;
- (id)valueForHTTPResponseHeaderField:(id)a0;
- (void)setStopAction:(BOOL)a0;
- (BOOL)stopAction;
- (id)valueInDictionary:(id)a0 forIgnoringCasekey:(id)a1;
- (void).cxx_destruct;
- (void)setResponse:(id)a0;
- (id)response;
- (id)request;
- (void)setRequest:(id)a0;
- (BOOL)dropAction;
- (void)setDropAction:(BOOL)a0;
- (id)updateContext;

@end
