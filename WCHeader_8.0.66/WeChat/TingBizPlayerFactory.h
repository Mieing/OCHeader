@interface TingBizPlayerFactory : NSObject

+ (BOOL)shouldTpTakeOverDownload:(id)a0;
+ (id)bizPlayerForTingItem:(id)a0;
+ (BOOL)isTPPlayerEnableForTingItem:(id)a0;
+ (BOOL)isPreloadNextPlayerEnableForTingItem:(id)a0;
+ (BOOL)isTPPlayerForMusicEnable:(id)a0;
+ (BOOL)isVoiceAbleMusic:(id)a0;
+ (BOOL)isAudiotryEnhEnable:(id)a0;
+ (BOOL)isTPPlayerForArticleNoHls:(id)a0;
+ (BOOL)isTPPlayerForArticleAudio;
+ (BOOL)isTPPlayerForWeAppAudio;
+ (BOOL)isTPPlayerForWeAppLocalFile;
+ (BOOL)isTPPlayerForFinderAudio;
+ (BOOL)isTPPlayerForLocalFile;
+ (BOOL)isTPPlayerIgnoreVideoError;
+ (long long)getTPPlayerTakeOverDownloadForMusicValue;
+ (BOOL)isTPPlayerTakeOverDownloadForMusic;
+ (BOOL)isEncryptExptEnable;
+ (BOOL)getTPPlayerTakeOverDownloadValueForOtherType;
+ (BOOL)isTPHearingAidExpt;
+ (BOOL)isHearingTtsScene:(id)a0;

@end
