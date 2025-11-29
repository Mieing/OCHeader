@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AFDSettingSearchManager : NSObject <AFDSettingSearchManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *settingItems;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisabledSettingItem:(id)a0;
+ (id)disabledItems;
+ (id)sharedInstance;
+ (id)rootItems;

- (void)registerSettingItemsWithJSONObj:(id)a0 delegate:(Class)a1 parentID:(id)a2;
- (void)p_addSettingItem:(id)a0;
- (void)registerSettingItem:(id /* block */)a0;
- (void)loadRegisterIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;

@end
