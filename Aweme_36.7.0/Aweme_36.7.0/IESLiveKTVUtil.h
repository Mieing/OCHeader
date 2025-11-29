@interface IESLiveKTVUtil : NSObject

+ (id)musicIDSet;
+ (BOOL)isNeedCheckCopyrightForAll;
+ (BOOL)containsMusicIDInCache:(id)a0;
+ (BOOL)isSEIMusicCopyrighted:(id)a0;
+ (void)addMusicIDToCache:(id)a0;
+ (void)handleSongCopyRighted:(id)a0;
+ (BOOL)isCurrentSongCopyrighted:(id)a0;
+ (BOOL)isNeedCheckCopyrightApp;
+ (unsigned long long)songTypeWithExtension:(id)a0;
+ (id)extensionWithSongType:(unsigned long long)a0;
+ (BOOL)isSEIMusicCopyrightedForApp:(id)a0;
+ (BOOL)isSEIMusicCopyrightedForRegion:(id)a0;
+ (BOOL)isCurrentAppIDNeedCheckCopyright;
+ (BOOL)isCurrentAppHasCopyrightWithAppIds:(id)a0;
+ (BOOL)isNeedCheckCopyrightForRegion;
+ (BOOL)isCurrentRegionHasCopyrightWithRegions:(id)a0;
+ (BOOL)isCurrentSongCopyrightedForApp:(id)a0;
+ (BOOL)isCurrentSongCopyrightedForRegion:(id)a0;
+ (id)filterNonCopyrightedSongs:(id)a0;
+ (void)filterNonCopyrightedSongUniqueList:(id)a0;
+ (unsigned long long)ktvSongTypeWithPath:(id)a0;
+ (void)filterNonCopyrightedSongsWithKtvMessage:(id)a0;

@end
