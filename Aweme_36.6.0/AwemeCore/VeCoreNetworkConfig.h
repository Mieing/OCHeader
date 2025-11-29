@class NSString;

@interface VeCoreNetworkConfig : NSObject

@property (nonatomic) BOOL isRetryRequest;
@property (nonatomic) BOOL tokenExpireRetry;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *backupIP;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *backupHost;
@property (nonatomic) BOOL needRetry;
@property (nonatomic) BOOL isIPRequest;
@property (nonatomic) BOOL disableOpaque;
@property (nonatomic) unsigned long long type;

- (id)getRetryUrl;
- (BOOL)checkRetryConditionWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
