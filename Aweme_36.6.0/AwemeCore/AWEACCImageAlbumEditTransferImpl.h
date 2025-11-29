@class NSString;

@interface AWEACCImageAlbumEditTransferImpl : HTSService <ACCImageAlbumEditTransferProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)continueAddedAssets:(id)a0 selectedAssets:(id)a1 publishModel:(id)a2 successBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (id)videoEditorWithModel:(id)a0;
- (id)transformLivePhotoVideoEditorWithModel:(id)a0;

@end
