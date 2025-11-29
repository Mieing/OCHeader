@class HLCarriorInfo, NSMutableDictionary, NSRecursiveLock;

@interface HLSchInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *mapApnToSchInfo;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long schIndex;
@property (nonatomic) struct __SCNetworkReachability { } *ref;
@property (retain, nonatomic) id backObserver;
@property (retain) HLCarriorInfo *carrior;

+ (id)shareInstance;
+ (BOOL)isJailbroken;

- (id)init;
- (void)dealloc;
- (void)configReachability;
- (void)asyncTouchScheduler;
- (void)touchScheduler;
- (id)settingValueForKey:(id)a0 appID:(long long)a1 carrior:(id)a2;
- (id)ipForDomain:(id)a0 count:(long long *)a1;
- (void)switchIP:(id)a0 domain:(id)a1 carrior:(id)a2;
- (void).cxx_destruct;

@end
