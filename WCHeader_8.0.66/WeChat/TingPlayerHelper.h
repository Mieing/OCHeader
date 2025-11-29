@interface TingPlayerHelper : NSObject

+ (void)playWithMusicInfo:(id)a0 scene:(int)a1;
+ (void)playWithMusicInfo:(id)a0 scene:(int)a1 enterPlayer:(BOOL)a2;
+ (void)playWithFinderDataItem:(id)a0 playbackTime:(double)a1 scene:(int)a2;
+ (void)playTingItem:(id)a0 scene:(int)a1;
+ (void)playTingItem:(id)a0 scene:(int)a1 enterPlayer:(BOOL)a2;
+ (void)playTingItem:(id)a0 launchOptions:(id)a1;
+ (void)playWithCategoryItem:(id)a0 presetItems:(id)a1 index:(unsigned long long)a2 scene:(int)a3;
+ (void)playWithCategoryItem:(id)a0 presetItems:(id)a1 index:(unsigned long long)a2 scene:(int)a3 enterPlayer:(BOOL)a4;
+ (void)playWithCategoryItem:(id)a0 presetItems:(id)a1 index:(unsigned long long)a2 launchOptions:(id)a3;
+ (void)playWithCategoryItemAndSubCategoryItem:(id)a0 presetItems:(id)a1 index:(unsigned long long)a2 launchOptions:(id)a3;
+ (BOOL)audioSceneAllowEnterSqaure:(id)a0 andScene:(int)a1;
+ (void)playAudioItem:(id)a0 launchOptions:(id)a1;
+ (void)playWithModel:(id)a0 launchOptions:(id)a1;
+ (void)playWithModel:(id)a0 launchOptions:(id)a1 completion:(id /* block */)a2;
+ (void)playWithListenIds:(id)a0 index:(unsigned long long)a1 scene:(int)a2 enterPlayer:(BOOL)a3 configuration:(id)a4;
+ (void)playWithListenIds:(id)a0 index:(unsigned long long)a1 launchOptions:(id)a2 configuration:(id)a3;
+ (id)globalPlayer;
+ (id)musciChatPlayer;
+ (id)currentPlayer;
+ (BOOL)isCurrentPlayerExist;
+ (id)createFlowPlayer;
+ (id)createFlowPlayer:(BOOL)a0;
+ (id)createCurrentPlayerIfNeeded;
+ (void)pauseCurrentPlayingItem;

@end
