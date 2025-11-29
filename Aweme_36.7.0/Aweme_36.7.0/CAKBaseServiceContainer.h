@interface CAKBaseServiceContainer : IESStaticContainer

+ (id)sharedContainer;

- (id)provideSingleton:(id)a0 CAKAlbumAIAssetViewProtocol:(id)a1;
- (id)provideSingleton:(id)a0 CAKCommonConfigProtocol:(id)a1;
- (id)provideSingleton:(id)a0 CAKAlbumAIMemoriesFeatureServiceProtocol:(id)a1;
- (id)provide:(id)a0 CAKLoadingProtocol:(id)a1;
- (id)provide:(id)a0 CAKToastProtocol:(id)a1;
- (id)provideSingleton:(id)a0 CAKResourceBundleProtocol:(id)a1;

@end
