@class NSString, NSMutableDictionary, NSMapTable;
@protocol IESLiveSettingsDictStorage;

@interface IESLiveSettingsStorageNew : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _subscriber_rwlock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _freezed_rwlock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _live_rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *freezedSetting;
@property (retain, nonatomic) id<IESLiveSettingsDictStorage> diskData;
@property (retain, nonatomic) NSMapTable *subscribers;
@property (nonatomic) BOOL needResetFreezedData;
@property (copy, nonatomic) NSString *settingVersion;
@property (copy, nonatomic) NSString *dolphinExtra;

+ (id)sharedInstance;

- (id)dictionaryForKeyStartingWith:(id)a0;
- (void)addSubscriber:(id)a0 forKey:(id)a1;
- (void)removeSubscriber:(id)a0 forKey:(id)a1;
- (void)resetFreezedSettingsWithWhiteList:(id)a0;
- (id)getFreezedSettingWithKey:(id)a0;
- (void)updateLiveSettingValue:(id)a0 forKey:(id)a1;
- (id)getLiveSettingWithKey:(id)a0;
- (id)setFreezedSettingValue:(id)a0 forKey:(id)a1;
- (void)replaceLiveSetting:(id)a0;
- (void)mergeLiveSetting:(id)a0 removeKeys:(id)a1;
- (long long)settingDictCount;
- (void)mergeSettingAndNotice:(id)a0 removeKeys:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
