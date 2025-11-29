@interface AEKRepositoryWorkspaceHelper : NSObject

+ (id)trackSlotWithVideoClip:(id)a0;
+ (id)megaDataWithBaseData:(id)a0;
+ (id)megaEditorWithWorkspace:(id)a0;
+ (BOOL)checkNeedUpdateWithMegaData:(id)a0 baseData:(id)a1;
+ (id)megaEditorWithData:(id)a0 subscriberProvider:(id)a1 hostID:(id)a2 diffAble:(BOOL)a3;
+ (void)setDelegate:(id)a0 forEditor:(id)a1;
+ (id)subscriberProviderWithDelegate:(id)a0;
+ (id)trackSlotWithAudioClip:(id)a0;
+ (id)trackWithAudio:(id)a0;
+ (id)trackWithVideo:(id)a0;

@end
