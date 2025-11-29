@class NSString;

@interface IESIMAlbumService : HTSService <IESIMAlbumService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAlbumWithConfigure:(id)a0 bizName:(id)a1 callerBiz:(id)a2 extraInfo:(id)a3 trackerInfoInject:(id /* block */)a4 completion:(id /* block */)a5;
- (id)albumConfigure;
- (id)customCellConfig;
- (id)cameraConfigure;
- (void)openCameraWithConfigure:(id)a0 completion:(id /* block */)a1;
- (id)assetConfigure;
- (void)getPhotoWithAssetConfigure:(id)a0 completion:(id /* block */)a1;
- (id)p_mapAlbumConfigure:(id)a0;
- (id)p_mapCustomCellConfig:(id)a0;

@end
