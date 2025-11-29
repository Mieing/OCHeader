@protocol AWEAlertEventProtocol;

@interface AWEAlertInterceptorCheckResult : NSObject

@property (nonatomic) unsigned long long verifyResult;
@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) id<AWEAlertEventProtocol> eventForStagedResume;

- (void).cxx_destruct;

@end
