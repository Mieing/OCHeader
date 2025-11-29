@interface AWEInnerPushSceneAvoidanceController : NSObject

+ (BOOL)isRegisteredInnerPush:(id)a0;
+ (BOOL)shouldAvoidCurrentSceneWithRequest:(id)a0;
+ (BOOL)hitBasicScenesToAvoid;
+ (BOOL)shouldAvoidWithShowOnlyScenes:(id)a0;
+ (BOOL)shouldAvoidWithExemptScenes:(id)a0;
+ (id)allSupportedVerifiableScenes;
+ (id)pageIdOfCurrentHybridScene;
+ (id)defaultAvoidanceScenesConfigFromSettings;
+ (BOOL)isCurrentSceneChatCalling;
+ (BOOL)isCurrentSceneShootPublish;
+ (BOOL)isCurrentSceneLive;
+ (BOOL)isCurrentSceneBatman;
+ (BOOL)isCurrentSceneIMTab;
+ (BOOL)isCurrentSceneIMRoom;
+ (BOOL)isCurrentSceneFansDetail;
+ (BOOL)isCurrentSceneNotificationDetail;
+ (BOOL)isCurrentSceneUrgeUpdate;
+ (BOOL)isCurrentSceneMediaChoose;
+ (BOOL)isCurrentSceneRedPacket;
+ (BOOL)isCurrentSceneShakeBanner;
+ (BOOL)isCurrentTopVC:(id)a0;

@end
