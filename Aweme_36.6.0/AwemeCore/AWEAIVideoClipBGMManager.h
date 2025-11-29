@interface AWEAIVideoClipBGMManager : NSObject

+ (void)p_requestHotMusicWithCommercialScene:(BOOL)a0 completion:(id /* block */)a1;
+ (void)p_requestBeatsMusicWithAssetModelArray:(id)a0 defaultMusic:(id)a1 completion:(id /* block */)a2;
+ (id)p_paramsWithSourceAssetModeArray:(id)a0;
+ (id)p_getRandomListWithAssetModelCount:(long long)a0 musicList:(id)a1 defaultMusic:(id)a2;
+ (void)requestWithSourceAssetModelArray:(id)a0 defaultMusic:(id)a1 createID:(id)a2 isCommercialScene:(BOOL)a3 completion:(id /* block */)a4;
+ (void)requestBeatsMusicWithAssetModelArray:(id)a0 defaultMusic:(id)a1 completion:(id /* block */)a2;

@end
