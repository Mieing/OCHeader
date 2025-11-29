@class NSString;

@interface AWEIntelliAlbumSDKRequestSystemAlbumInstance : NSObject <ILARequestSystemAlbumProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestImageWithAssetId:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)requestVideoWithAssetId:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
