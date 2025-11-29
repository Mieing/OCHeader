@interface AWEEditAlbumImportConfig : NSObject

@property (nonatomic) BOOL onlySupportPhotoImport;
@property (nonatomic) BOOL supportPhotoImport;
@property (nonatomic) BOOL supportLivePhotoImport;
@property (nonatomic) BOOL supportVideoImport;

- (id)init;

@end
