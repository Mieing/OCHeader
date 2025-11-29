@class NSString, NSDictionary;

@interface IESLiveMultiTargetActionImpl : NSObject <IESLiveSettingsSubscriber>

@property (retain, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *localData;
@property (copy, nonatomic) NSDictionary *configInfo;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)settingUpdateWithKey:(id)a0 value:(id)a1;
- (void)generateConfigInfo:(id)a0;
- (id)valueForCurrentTargetWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)remoteConfig;

@end
