@protocol IESGCPStorageService, IESGCPPhotoLibraryService;

@interface IESGCPOpenGameCPPhotoAlbumMethodImpl : IESGCPOpenGameCPPhotoAlbumMethod

@property (retain, nonatomic) id<IESGCPPhotoLibraryService> photoService;
@property (retain, nonatomic) id<IESGCPStorageService> draftFileListStorage;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
