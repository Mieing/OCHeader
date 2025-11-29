@class NSString;

@interface DitoDisasterRecoveryConfig : NSObject

@property (copy, nonatomic) NSString *recoveryUrl;
@property (nonatomic) long long degradeStrategy;
@property (copy, nonatomic) NSString *degradeRequestPath;
@property (copy, nonatomic) NSString *degradeWebBaseURL;
@property (copy, nonatomic) NSString *degradeStaticTitle;
@property (copy, nonatomic) NSString *degradeStaticDescription;

+ (id)parse:(id)a0;

- (void).cxx_destruct;

@end
