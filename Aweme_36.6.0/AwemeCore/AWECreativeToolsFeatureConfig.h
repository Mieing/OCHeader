@class ACCCreationToolMediaTypeObject, AUCDTOFeatureEditor;

@interface AWECreativeToolsFeatureConfig : NSObject

@property (retain, nonatomic) ACCCreationToolMediaTypeObject *mediaType;
@property (nonatomic) long long featureType;
@property (nonatomic) BOOL useImageAlbumEditor;
@property (retain, nonatomic) AUCDTOFeatureEditor *featureEditor;

- (void).cxx_destruct;

@end
