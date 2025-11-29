@interface TingWebAudioStateManager : NSObject

+ (id)endSuccessfully:(id)a0;
+ (id)endSuccessfully:(id)a0 result:(id)a1;
+ (id)endWithCode:(long long)a0 func:(id)a1 desc:(id)a2;
+ (id)setAudioState:(id)a0 info:(id)a1 scene:(int)a2;
+ (id)audioStateInfo:(id)a0 tingItem:(id)a1 status:(int)a2;
+ (id)standAlonePlayAppAudioStateInfoWithEvent:(int)a0;
+ (id)getAudioState:(id)a0 info:(id)a1;
+ (id)operateAudio:(id)a0 info:(id)a1;
+ (id)onAudioStateChanged:(id)a0 tingItem:(id)a1 status:(int)a2 event:(int)a3;
+ (id)opSetShutDownWithInfoAndReturnErrmsg:(id)a0;
+ (id)opSetVituralPlayerForegroundState:(id)a0;
+ (id)opRefreshPlayListWithInfoAndReturnErrmsg:(id)a0;
+ (id)isValidTingItem:(id)a0 sourceType:(long long)a1;
+ (id)tingItemFromWebItem:(id)a0;
+ (id)webItemFromTingItem:(id)a0;
+ (BOOL)isValidCategory:(id)a0;
+ (id)tingItemFromPlayableInfo:(id)a0;
+ (void)playCategory:(id)a0 itemList:(id)a1 index:(unsigned long long)a2 deleteAfterLsiten:(BOOL)a3 launchOptions:(id)a4;

@end
