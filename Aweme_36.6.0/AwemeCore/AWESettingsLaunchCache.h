@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AWESettingsLaunchCache : NSObject {
    _Atomic BOOL _launch_flag;
    _Atomic BOOL _fulldata_loaded;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSMutableSet *launchKeys;
@property (copy, nonatomic) NSDictionary *launchCache;
@property (copy, nonatomic) NSString *launchCachePath;
@property (copy, nonatomic) NSString *launchCacheDir;
@property (copy, nonatomic) NSString *launchCacheFlagPath;
@property (nonatomic) BOOL enable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addLaunchKeyIfNeeded:(id)a0;
- (id)valueInLaunchCache:(id)a0;
- (void)updateForNextLaunch:(BOOL)a0;
- (void)createLaunchCache:(id)a0 getValueHandler:(id /* block */)a1;
- (void)finishLaunch;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)notifyEvent:(unsigned long long)a0;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
