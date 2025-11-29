@class NSString, NSMutableDictionary, NSObject;
@protocol HTSKVStore, OS_dispatch_queue;

@interface IESLiveSettingOnline : NSObject <IESLiveSettingOnlineService>

@property (nonatomic) BOOL settingAB;
@property (retain, nonatomic) id<HTSKVStore> expiredLocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingQueue;
@property (retain, nonatomic) NSMutableDictionary *settingOnline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerSettingKey:(id)a0;
- (void)registerSettingKey:(id)a0 settingValue:(id)a1;
- (void)defaultTraceSetting;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isExpired;
- (void)didEnterBackground:(id)a0;

@end
