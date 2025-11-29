@class NSDictionary, NSUserDefaults;

@interface HMDReportDowngrador : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSDictionary *_downgradeRule;
    NSUserDefaults *_userDefaults;
}

@property (class, nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (BOOL)needUploadWithLogType:(id)a0 serviceName:(id)a1 aid:(id)a2;
- (void)updateDowngradeRule:(id)a0;
- (BOOL)needUploadWithLogType:(id)a0 serviceName:(id)a1 aid:(id)a2 currentTime:(double)a3;
- (void)updateDowngradeRule:(id)a0 forAid:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
