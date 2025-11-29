@class NSMutableDictionary;

@interface HMDSDKMonitorManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *sdkInfoDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setupSDKMonitorWithSDKAid:(id)a0 monitorUserInfo:(id)a1 productions:(id /* block */)a2;
- (id)sdkHostAidWithSDKAid:(id)a0;
- (id)ttMonitorUserInfoWithSDKAid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
