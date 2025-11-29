@class NSTimer;

@interface IESGurdAutoRequestManager : NSObject

@property (retain, nonatomic) NSTimer *autoRequestTimer;

+ (id)sharedManager;

- (void)handleRequestConfig:(id)a0;
- (void)registerAccessKeysArray:(id)a0;
- (void)handleColdLaunchRequestWithAccessKeys:(id)a0;
- (void)handlePollingInterval:(long long)a0 accessKeys:(id)a1;
- (void)handleRequestMeta:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
