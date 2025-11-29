@class NSString;

@interface AWEMusicRequestService : HTSService <AWEMusicRequestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addOrDeleteMusicID:(id)a0 songID:(id)a1 toPlaylistID:(id)a2 scene:(id)a3 action:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)postMusic:(id)a0 playlist:(id)a1 action:(unsigned long long)a2;
+ (void)requestGuideLunaMusicianInfoWithUserID:(id)a0 completion:(id /* block */)a1;
+ (void)requestCollectLunaSongID:(id)a0 mediaType:(unsigned long long)a1 actionType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)requestLunaArtistListWithArtistID:(id)a0 cursor:(id)a1 count:(long long)a2 completion:(id /* block */)a3;


@end
