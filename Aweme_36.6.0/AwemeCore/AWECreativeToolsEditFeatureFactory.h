@interface AWECreativeToolsEditFeatureFactory : NSObject

+ (id)featureConfigsWithFeatureTypes:(id)a0 mediaType:(id)a1 featureEditor:(id)a2;
+ (id)editFeaturesWithFeatureConfigs:(id)a0 mediaType:(id)a1 shouldUseImageAlbumEditor:(BOOL)a2;
+ (id)pluginsWithComponentClasses:(id)a0;
+ (id)availableFeatureTypesForMediaType:(id)a0;
+ (id)editFeatureFeatureConfig:(id)a0;
+ (id)featureConfigForFeatureType:(long long)a0 mediaType:(id)a1 featureEditor:(id)a2;
+ (id)availableFeatureTypesForMixedEdit;
+ (id)availableFeatureTypesForImageEdit;
+ (id)availableFeatureTypesForVideoEdit;

@end
