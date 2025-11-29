@class NSDictionary;

@interface AWESECAppJumpAppLinkRuleManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (copy, nonatomic) NSDictionary *appLinkRuleDict;

+ (id)shared;

- (BOOL)resourceAvailable;
- (void)loadResource;
- (BOOL)isAppLink:(id)a0;
- (void)parseDataToRuleDict:(id)a0;
- (BOOL)isURL:(id)a0 fitsSingleRuleGroup:(id)a1 cache:(id)a2;
- (long long)isURL:(id)a0 fitsRule:(id)a1 cache:(id)a2;
- (void).cxx_destruct;
- (id)channel;
- (id)init;
- (id)path;
- (void)dealloc;
- (id)accessKey;

@end
