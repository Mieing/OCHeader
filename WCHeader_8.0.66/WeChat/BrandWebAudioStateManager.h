@interface BrandWebAudioStateManager : NSObject

+ (id)endSuccessfully:(id)a0;
+ (id)endSuccessfully:(id)a0 result:(id)a1;
+ (id)endWithCode:(long long)a0 func:(id)a1 desc:(id)a2;
+ (BOOL)shouldHandleGetAudioState:(id)a0;
+ (id)getAudioState:(id)a0;
+ (BOOL)shouldHandleSetAudioState:(id)a0;
+ (id)setAudioState:(id)a0 info:(id)a1 scene:(int)a2;
+ (BOOL)shouldHandleOperateAudio:(id)a0;
+ (id)operateAudio:(id)a0 info:(id)a1;
+ (id)handleSetForegroundSate:(id)a0;
+ (id)handleSetShutDownTimer:(id)a0;
+ (id)handleRefreshPlayList:(id)a0;
+ (id)isValidTingItem:(id)a0;
+ (BOOL)enableToPlay:(int)a0;
+ (BOOL)isValidCategory:(id)a0;
+ (void)playCategory:(id)a0 itemList:(id)a1 index:(unsigned long long)a2 deleteAfterLsiten:(BOOL)a3 launchOptions:(id)a4;

@end
