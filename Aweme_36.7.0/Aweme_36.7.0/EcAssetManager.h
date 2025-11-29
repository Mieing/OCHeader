@class EcClient;

@interface EcAssetManager : NSObject

@property (weak, nonatomic) EcClient *client;

- (id)localAsset:(id)a0;
- (void)getVideoInfos:(id)a0 complete:(id /* block */)a1;
- (id)cloudAsset:(unsigned long long)a0;
- (id)decryptAssetId:(id)a0 data:(id)a1;
- (id)getAssetByAssetId:(id)a0;
- (void)upsertCloudAssetList:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
