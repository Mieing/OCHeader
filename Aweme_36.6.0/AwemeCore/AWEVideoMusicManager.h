@class NSString;

@interface AWEVideoMusicManager : NSObject <AWEVideoMusicManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchLocalURLForMusic:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
+ (BOOL)downloadedMusic:(id)a0;
+ (void)fetchLocalURLForMusic:(id)a0 enableDownloadOpt:(BOOL)a1 withProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 extraTrack:(id)a2 withProgress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 withProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 enableDownloadOpt:(BOOL)a2 withProgress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)requestMusicItemWithID:(id)a0 completion:(id /* block */)a1;
+ (void)requestMusicItemWithID:(id)a0 basicParams:(id)a1 completion:(id /* block */)a2;
+ (void)requestMusicItemWithID:(id)a0 additionalParams:(id)a1 completion:(id /* block */)a2;
+ (void)clearMusicCache;
+ (id)createDirIfNotExist;
+ (void)requestCollectingAWEMusicWithID:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)localURLForMusic:(id)a0;
+ (id)localLyricURLForMusic:(id)a0;
+ (id)fetchPlayerMusicCacheIfNeedWithMusic:(id)a0;
+ (void)downloadMusicModel:(id)a0 params:(id)a1 extraTrack:(id)a2 progress:(id /* block */)a3 playingHandler:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)downloadMusicBeats:(id)a0 completion:(id /* block */)a1;
+ (void)requestCollectingMusicsWithCursor:(id)a0 count:(id)a1 channelID:(id)a2 isCommerce:(BOOL)a3 completion:(id /* block */)a4;
+ (void)refreshMusicItem:(id)a0 completion:(id /* block */)a1;
+ (void)dislikeMusicWithMusicID:(id)a0 channelID:(id)a1 completion:(id /* block */)a2;
+ (void)fetchImageMusicBeatsLocalURLWithMusic:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
+ (BOOL)isMusicSupportBeats:(id)a0;
+ (BOOL)enableMusicCacheFileNameByUrlKey;
+ (id)musicErrorWithLocalizedDescription:(id)a0;
+ (id)localMusicFolderPath;
+ (id)fileNameWithURLList:(id)a0;
+ (id)fileExtensionWithURLList:(id)a0;
+ (id)musicDirectorPath;
+ (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 enableDownloadOpt:(BOOL)a2 extraTrack:(id)a3 withProgress:(id /* block */)a4 completion:(id /* block */)a5;
+ (BOOL)p_isMusicDownloaded:(id)a0 lyricURL:(id)a1;
+ (id)downloadingMusicList;
+ (void)p_fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 enableDownloadOpt:(BOOL)a2 withProgress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)_fetchBeatsLocalURLWithType:(unsigned long long)a0 forMusic:(id)a1 withProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)copyPlayerMusicCacheIfNeedWithMuisc:(id)a0;
+ (void)_fetchLocalURLForMusic:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)musicBeatsArray:(id)a0;
+ (void)p_downloadMusicWithURLs:(id)a0 destinationURL:(id)a1 progress:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (id)imageMusicBeatsUrlListFromMusic:(id)a0;
+ (id)beatsArrayFromLocalURL:(id)a0 error:(id *)a1;
+ (id)beatsArrayFromData:(id)a0 error:(id *)a1;
+ (void)p__fetchImageMusicBeatsLocalURLWithMusic:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)beatsArrayFromString:(id)a0 error:(id *)a1;
+ (BOOL)p_isURLDownloaded:(id)a0;
+ (BOOL)_hasStrongBeat:(id)a0;

- (void)stream_cancelDownloadMusicModel:(id)a0;

@end
