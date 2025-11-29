@class NSString, NSDictionary;

@interface WCPayNetworkError : NSObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSString *errorDetailUrl;

+ (id)errorWithCode:(long long)a0 message:(id)a1;

- (id)convertToNSError;
- (id)description;
- (void).cxx_destruct;

@end
