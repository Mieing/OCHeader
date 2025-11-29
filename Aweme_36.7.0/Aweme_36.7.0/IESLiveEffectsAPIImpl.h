@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveEffectsAPIImpl : HTSLiveApi <IESLiveEffectsAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchEffectsListWithLiveRoomModel:(id)a0 tintTags:(id)a1 fetchMomentType:(long long)a2 forAssetIDs:(id)a3 assetIdVersionString:(id)a4 enableEffectsApiV2:(BOOL)a5 userPortrait:(id)a6 baseVersion:(id)a7 enableUrlTemplate:(BOOL)a8 completion:(id /* block */)a9;
- (id)p_generateRealError:(id)a0 response:(id)a1;
- (void)p_trackFetchEffectsListCallbackWithResponse:(id)a0 error:(id)a1 trackExtra:(id)a2;
- (id)p_createAssetIdArrayWithArray:(id)a0;
- (void)handleResponse:(id)a0 businessError:(id)a1 needAppendUrl:(BOOL)a2 completion:(id /* block */)a3;
- (void)appendResourceDownloadUrlWithResponse:(id)a0;
- (void)p_trackFetchEffectsListCallbackWitStatus:(long long)a0 trackExtra:(id)a1;
- (void).cxx_destruct;

@end
