@class NSString, NSMutableDictionary;

@interface AWEMusicManager : NSObject <AWEMusicManagerProtocol>

@property (class, retain, nonatomic) NSMutableDictionary *newestTitleCache;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestMusicItemWithID:(id)a0 completion:(id /* block */)a1;
+ (void)requestCollectingAWEMusicWithID:(id)a0 videoId:(id)a1 type:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)requestAwemeListWithID:(id)a0 pullType:(id)a1 cursor:(id)a2 count:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
+ (void)requestRelatedAwemeListWithID:(id)a0 pullType:(id)a1 cursor:(id)a2 count:(id)a3 scene:(unsigned long long)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (void)requestMusicRelatedItemsWithMusicRegionType:(unsigned long long)a0 itemID:(id)a1 type:(unsigned long long)a2 scene:(unsigned long long)a3 extraParams:(id)a4 completion:(id /* block */)a5;
+ (id)localMusicNewestTitleWithMusicID:(id)a0;
+ (void)requestInspirationWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)addLocalMusicNewestTitleCache:(id)a0 title:(id)a1;
+ (id)getMusicListExpectedSizeInfo;
+ (id)getMusicDetailExpectedSizeInfo;
+ (id)processMusicDetailResponseJsonDict:(id)a0 musicRegionType:(unsigned long long)a1;
+ (void)uploadAudioFileData:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)requestAwemeListWithID:(id)a0 pullType:(id)a1 cursor:(id)a2 count:(id)a3 completion:(id /* block */)a4;
+ (void)requestCollectingAWEMusicWithID:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;


@end
