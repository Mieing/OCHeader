@class NSString;

@interface LLDitoDisasterRecoveryConfig : NSObject

@property (copy, nonatomic) NSString *recoveryUrl;
@property (nonatomic) long long degradeStrategy;
@property (copy, nonatomic) NSString *degradeRequestPath;
@property (copy, nonatomic) NSString *degradeWebBaseURL;
@property (copy, nonatomic) NSString *degradeStaticTitle;
@property (copy, nonatomic) NSString *degradeStaticDescription;
@property (nonatomic) BOOL enableExtendErrorCodeConfig;

+ (id)parse:(id)a0;

- (void).cxx_destruct;

@end
