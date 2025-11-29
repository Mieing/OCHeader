@interface AWEStudioCaptionEmbeddingUploader : NSObject

- (id)uploadAssetNormalFeatures:(id)a0 completion:(id /* block */)a1;
- (id)uploadAssetLocationFeatures:(id)a0 completion:(id /* block */)a1;
- (id)uploadEmbedding:(id)a0 version:(id)a1 withSssetNormalFeature:(id)a2 completion:(id /* block */)a3;

@end
