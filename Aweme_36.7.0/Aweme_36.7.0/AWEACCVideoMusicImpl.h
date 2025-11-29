@class NSString;

@interface AWEACCVideoMusicImpl : NSObject <ACCVideoMusicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchLocalURLForMusic:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)downloadedMusic:(id)a0;
- (void)fetchLocalURLForMusic:(id)a0 enableDownloadOpt:(BOOL)a1 withProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 extraTrack:(id)a2 withProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 withProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchLocalURLForMusic:(id)a0 lyricURL:(id)a1 enableDownloadOpt:(BOOL)a2 withProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)requestMusicItemWithID:(id)a0 completion:(id /* block */)a1;
- (void)requestMusicItemWithID:(id)a0 basicParams:(id)a1 completion:(id /* block */)a2;
- (void)requestMusicItemWithID:(id)a0 additionalParams:(id)a1 completion:(id /* block */)a2;
- (void)downloadMusicModel:(id)a0 playingHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)localURLForMusic:(id)a0;
- (id)localLyricURLForMusic:(id)a0;
- (id)fetchPlayerMusicCacheIfNeedWithMusic:(id)a0;
- (void)downloadMusicModel:(id)a0 params:(id)a1 extraTrack:(id)a2 progress:(id /* block */)a3 playingHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)refreshMusicItem:(id)a0 completion:(id /* block */)a1;
- (void)dislikeMusicWithMusicID:(id)a0 channelID:(id)a1 completion:(id /* block */)a2;
- (void)requestCollectingMusicsWithCursor:(id)a0 count:(id)a1 channelID:(id)a2 completion:(id /* block */)a3;
- (void)requestCollectingMusicWithID:(id)a0 collect:(BOOL)a1 completion:(id /* block */)a2;
- (void)downloadMusicModel:(id)a0 extraTrack:(id)a1 playingHandler:(id /* block */)a2 completion:(id /* block */)a3;

@end
