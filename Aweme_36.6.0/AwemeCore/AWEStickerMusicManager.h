@interface AWEStickerMusicManager : NSObject

+ (id)localURLForMusic:(id)a0;
+ (BOOL)insertMusicModelToCache:(id)a0;
+ (BOOL)musicIsForceBindStickerWithExtra:(id)a0;
+ (id)fetchtMusicModelFromCache:(id)a0;
+ (BOOL)getForceBindMusicDownloadFailed:(id)a0;
+ (BOOL)needToDownloadMusicWithEffectModel:(id)a0;
+ (void)setForceBindMusicDownloadFailedWithEffectIdentifier:(id)a0;
+ (void)initializeForceBindMusicDownloadFailed;

@end
