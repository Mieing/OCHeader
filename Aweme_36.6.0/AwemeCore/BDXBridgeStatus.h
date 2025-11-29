@class NSString;

@interface BDXBridgeStatus : NSObject

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;

+ (id)statusMessageWithStatusCode:(long long)a0;
+ (id)statusWithStatusCode:(long long)a0 message:(id)a1;
+ (id)statusWithStatusCode:(long long)a0;

- (void).cxx_destruct;
- (id)description;

@end
