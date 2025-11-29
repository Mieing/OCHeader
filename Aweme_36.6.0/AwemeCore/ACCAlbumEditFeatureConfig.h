@class ACCAlbumExtension;

@interface ACCAlbumEditFeatureConfig : NSObject

@property (retain, nonatomic) ACCAlbumExtension *extension;
@property (nonatomic) BOOL listViewEditEnabled;
@property (nonatomic) BOOL previewViewEditEnabled;
@property (nonatomic) BOOL photoEditEnabled;
@property (nonatomic) BOOL livePhotoEditEnabled;
@property (nonatomic) BOOL videoEditEnabled;

- (void).cxx_destruct;

@end
