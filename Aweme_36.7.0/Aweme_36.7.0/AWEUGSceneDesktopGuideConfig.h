@interface AWEUGSceneDesktopGuideConfig : NSObject

+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;

- (id)aNSObject;
- (id)aAWEUGKitModuleCommonAdapter;
- (id)handleResponseWithData:(id)a0 pitayaMessage:(id)a1 guideInfoInstance:(id)a2;
- (id)formatActionScheme:(id)a0 pitayaMessage:(id)a1;
- (id)handleHalfScreenAlertData:(id)a0;
- (id)handleMediaHalfScreenAlertData:(id)a0;
- (id)handleImageMediumScreenAlertData:(id)a0 guideInfoImageModel:(id)a1;
- (id)handleLynxGuideSchemaWithExtraDict:(id)a0 originSchema:(id)a1;
- (id)handleShortcutSchema:(id)a0 pitayaMessage:(id)a1;

@end
