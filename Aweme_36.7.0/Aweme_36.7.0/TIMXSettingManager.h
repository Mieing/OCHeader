@class NSDictionary, NSString, TIMXSDKInstance;

@interface TIMXSettingManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) BOOL enableMachOForStartup;
@property BOOL p_syncIsFetching;
@property long long p_syncRetryCount;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSDictionary *lastCachedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (id)valueForKey:(id)a0 expectedClass:(Class)a1 useCache:(BOOL)a2 forceUseLast:(BOOL)a3;
- (void)p_syncSettingsFromServer;
- (void)p_appWillEnterForeground;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
