@interface AWEMusicStreamingUtils : NSObject

+ (BOOL)isPersonalRecommendSwitchOn;
+ (void)setLocalEdit:(BOOL)a0 playlist:(id)a1;
+ (id)formatTime:(double)a0;
+ (id)etQueueNameForQueue:(id)a0 mediaModel:(id)a1;
+ (id)durationAccessibilityLabel:(double)a0;
+ (long long)collectionReqCountForLoadMore;
+ (id)apiScene;
+ (id)apiValidScene;
+ (id)collectV2Scene;
+ (id)longLyricsAttrString:(id)a0;
+ (double)heightOfLyricsAttrString:(id)a0 width:(double)a1;
+ (id)replaceLynxSchemaWithHunter:(id)a0;
+ (BOOL)lyricsUrlAvailable:(id)a0 type:(unsigned long long)a1;
+ (id)accessibilityLabelOfLoopMode:(unsigned long long)a0;
+ (id)collectionToast:(unsigned long long)a0 error:(id)a1;
+ (BOOL)localEditPlaylist:(id)a0;
+ (long long)myPlaylistCountForLoadMore;
+ (id)shortLyricsAttrString:(id)a0;
+ (id)titleOf:(id)a0;
+ (id)cancelCollectionSuccess;
+ (id)collectionSuccess;
+ (id)collectionFailForShark;
+ (id)cancelCollectionFailForLogin;
+ (id)collectionFailForLogin;
+ (id)cancelCollectionFail;
+ (id)collectionFail;
+ (id)etQueueNameForQueue:(id)a0;
+ (id)lyricsAttrString:(id)a0 lineHeight:(double)a1 font:(id)a2;
+ (id)localEditPlaylistKey:(id)a0;
+ (id)musicTabTitleOfQueueType:(id)a0;
+ (id)getCoverPicURLFromList:(id)a0;
+ (id)currentDay;

@end
