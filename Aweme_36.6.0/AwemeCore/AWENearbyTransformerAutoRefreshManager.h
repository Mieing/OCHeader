@class AWENearbyDynamicEventSubscriber, NSMutableDictionary;

@interface AWENearbyTransformerAutoRefreshManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneHandlesMap;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *transformerRefreshSubscriber;
@property (retain, nonatomic) AWENearbyDynamicEventSubscriber *transformerShouldRefreshSubcriber;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)handleByteSyncMsg:(id)a0;
- (id)__stringWithInteger:(long long)a0;
- (void)__registerTransformerRefreshJSBSubscriber;
- (long long)__timeFrequency;
- (void)__recieveAutoRefreshMessage:(id)a0;
- (void)__trackClientReceiveRefreshTransformerMsg:(id)a0;
- (void)registerSceneType:(long long)a0 sceneController:(id)a1;
- (void)triggerAutoRefreshIfNeedsWithSceneType:(long long)a0;
- (BOOL)triggerUpdateCardDataIfNeedsWithSceneType:(long long)a0;
- (void)cleanAutoRefreshModelsWithSceneType:(long long)a0;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__settings;

@end
