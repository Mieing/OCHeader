@interface TingUtil : NSObject

+ (id)defaultImage;
+ (id)defaultImageForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultAudioCoverPlaceholder;
+ (id)defaultImageInLightmodeForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultImageInDarkmodeForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultTingPlayerImageForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultTingPlayerNonMusicImageForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)defaultThumbnailForListenItem:(id)a0;
+ (id)defaultThumbnail:(BOOL)a0;
+ (id)extJSONFrom:(id)a0;
+ (BOOL)isFromAlbumPageWithExtInfo:(id)a0;
+ (BOOL)isFromAlbumPageWithExtJSON:(id)a0;
+ (id)listenItemTypeString:(int)a0;
+ (id)logTitleForTingItem:(id)a0;
+ (id)categoryItemTypeString:(int)a0;
+ (id)descStringForCategoryItemDesc:(id)a0;
+ (void)playFeedback;
+ (id)countString:(int)a0;
+ (id)durationString:(int)a0;
+ (int)correctedDuration:(int)a0;
+ (id)displayDurationString:(int)a0;
+ (id)musicTranslucentIconForAppId:(id)a0;
+ (id)musicSourceNameWithAppId:(id)a0;
+ (BOOL)isTingPlayersPlayingOrLoading;
+ (BOOL)isTingPlayAppPlayingOrLoading;
+ (BOOL)isPlayingOrLoadingStatus:(int)a0;
+ (id)tingPlayerEventString:(int)a0;
+ (id)tingPlayerStatusString:(int)a0;
+ (id)descriptionForPlayMode:(int)a0;
+ (id)md5StringFromInput:(id)a0;
+ (BOOL)shouldWaitForDurationAvailable:(id)a0;
+ (void)openProfileLogicWithUsername:(id)a0;
+ (id)getProfileContactWithUsername:(id)a0;
+ (void)openContactInfoView:(id)a0;
+ (BOOL)isQQMusicAppId:(id)a0;
+ (BOOL)shouldSkipSetCategroy:(id)a0 options:(unsigned long long)a1;
+ (BOOL)isTingAuidioModuleActive;
+ (id)unsupportUrlForListenItem:(id)a0 categoryItem:(id)a1;

@end
