@class NSString;

@interface AWEImageAlbumGalleryExportManagerImpl : NSObject <ACCImageAlbumGalleryExportManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generateProjectsWithAssets:(id)a0 workspace:(id)a1 isSupportLivePhoto:(BOOL)a2 enableLoadingView:(BOOL)a3 completion:(id /* block */)a4;
- (void)generateProjectsWithAssets:(id)a0 workspace:(id)a1 isSupportLivePhoto:(BOOL)a2 completion:(id /* block */)a3;

@end
