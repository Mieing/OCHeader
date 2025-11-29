@interface IESLivePlaybackDanmakuCreator : NSObject

+ (id)defaultSettingsWithDiContext:(id)a0;
+ (id)nodeWithMessage:(id)a0 emoticonParser:(id)a1 danmakuSetting:(id)a2 context:(id)a3;
+ (id)createPlaybackWithContentView:(id)a0 settings:(id)a1;
+ (id)createDanmakuSettingFragmentWithStore:(id)a0;
+ (id)createDanmakuStoreWithComponentContext:(id)a0;
+ (id)createDanmakuSettingStoreWithEngineSettings:(id)a0 context:(id)a1;
+ (id)createDanmakuComponentManagerWithContext:(id)a0 trackContext:(id)a1;

@end
