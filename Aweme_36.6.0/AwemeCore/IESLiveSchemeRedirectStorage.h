@class NSDictionary;

@interface IESLiveSchemeRedirectStorage : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _live_rwlock;
}

@property (copy, nonatomic) NSDictionary *configData;
@property (copy, nonatomic) NSDictionary *geckoRedirectRules;
@property (nonatomic) long long geckoRedirectRulesVersion;
@property (nonatomic) double limitSecond;
@property BOOL fetched;

- (id)getGeckoPkgID;
- (void)updateRedirectConfig:(id)a0;
- (void)getUGSettings:(id /* block */)a0;
- (id)getRedirectConfig;
- (void)saveData:(id)a0 toKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
