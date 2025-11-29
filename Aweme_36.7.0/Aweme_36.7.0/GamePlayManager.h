@class NSString, NSMutableDictionary;

@interface GamePlayManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *processorDic;
@property (copy, nonatomic) NSString *leaveShadowEffectPath;
@property (copy, nonatomic) NSString *shadowThroughEffectPath;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appSecret;

- (void)processForCutSameWithResourceModels:(id)a0 completion:(id /* block */)a1;
- (id)initWithAPPSecret:(id)a0 appKey:(id)a1;
- (id)p_checkResourceTypeMatchedWithGamePlay:(id)a0;
- (void)processServerGPForVideo:(id)a0 finalResults:(id)a1 mvPhotoFolder:(id)a2 completion:(id /* block */)a3;
- (void)processServerGPForPhoto:(id)a0 finalResults:(id)a1 mvPhotoFolder:(id)a2 completion:(id /* block */)a3;
- (void)processLocalGPForVideo:(id)a0 finalResults:(id)a1 mvPhotoFolder:(id)a2 completion:(id /* block */)a3;
- (void)p_prefetchStopmotionResourcesWithMaterials:(id)a0 Completion:(id /* block */)a1;
- (id)getServerHandleVideoResponseModel:(id)a0;
- (id)getServerHandlePicResponseModel:(id)a0;
- (id)createLocalGPInfoWithResourceModel:(id)a0;
- (id)speedConfigForGamePlay:(unsigned long long)a0 jsonParam:(id)a1;
- (id)algorithmModelForStopmotion;
- (id)effectIDForStopmotionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)cancelAll;

@end
