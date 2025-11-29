@class NSString, NSDictionary;

@interface SECWebViewPiperContext : NSObject

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSString *namescope;
@property (copy, nonatomic) NSDictionary *response;
@property (copy, nonatomic) NSString *piperFramework;
@property (copy, nonatomic) NSString *sessionId;

- (id)hybridPiperContext;
- (void).cxx_destruct;

@end
