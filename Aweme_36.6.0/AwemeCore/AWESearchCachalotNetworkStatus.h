@interface AWESearchCachalotNetworkStatus : NSObject

@property (nonatomic) long long statusCode;
@property (nonatomic) long long errorCode;

+ (id)statusWithError:(id)a0 itemCount:(long long)a1;

- (BOOL)success;

@end
