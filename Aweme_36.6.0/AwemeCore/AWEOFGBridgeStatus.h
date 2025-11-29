@class NSString;

@interface AWEOFGBridgeStatus : NSObject

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;

+ (id)statusWithStatusCode:(long long)a0 message:(id)a1;
+ (id)defaultStatusWithStatusCode:(long long)a0;
+ (id)messageWithStatusCode:(long long)a0;

- (void).cxx_destruct;

@end
