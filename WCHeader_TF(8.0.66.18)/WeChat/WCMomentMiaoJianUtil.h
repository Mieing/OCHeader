@interface WCMomentMiaoJianUtil : NSObject

+ (BOOL)injectMiaoJianMetaForUploadTask:(id)a0 fromSightDraft:(id)a1;
+ (id)parseMiaoJianMessageExtForUploadTask:(id)a0;
+ (BOOL)clearMiaoJianMetaForUploadTask:(id)a0;
+ (BOOL)isDataItemOfMiaoJianVideo:(id)a0;
+ (BOOL)isAppInfoForMiaoJian:(id)a0;
+ (id)parseMiaoJianExtInfo:(id)a0;
+ (id)lyricsFromMusicInfo:(id)a0;
+ (id)songInfoFromMusicInfo:(id)a0;
+ (id)omjMusicInfoFromSprMiaoJianBgmSearchMusicItem:(id)a0;
+ (id)omjMusicInfoFromSelectedMusicData:(id)a0;
+ (id)generateJsonBase64FromObject:(id)a0;
+ (id)generateUrlSafeJsonBase64FromObject:(id)a0;
+ (id)saveImageToMJDir:(id)a0;
+ (BOOL)removeFileFromMJDirByFileName:(id)a0;
+ (id)filePathFromMJDirOfFileName:(id)a0;
+ (id)getWCMomentsMJDir;
+ (unsigned long long)cleanMJDir;
+ (id)_generateJSONStringWithObject:(id)a0 replacingForReport:(BOOL)a1;
+ (id)_safeReportStringWithString:(id)a0;
+ (id)_encodeToBase64WithString:(id)a0;
+ (id)_encodeToBase64WithUrlStr:(id)a0;
+ (id)_decodeFromBase64String:(id)a0;
+ (id)_decodeFromBase64UrlStr:(id)a0;

@end
