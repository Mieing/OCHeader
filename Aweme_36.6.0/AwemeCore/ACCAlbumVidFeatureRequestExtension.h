@class AWERequestVidFeatureModel;

@interface ACCAlbumVidFeatureRequestExtension : ACCAlbumExtension

@property (retain, nonatomic) AWERequestVidFeatureModel *featureModel;

- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidFinishFirstRender:(id)a0;
- (void).cxx_destruct;

@end
