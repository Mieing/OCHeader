@interface CKAMediaRequestManager : NSObject

@property (class, nonatomic, readonly) CKAMediaRequestManager *shared;

- (int)getUIImageWithPHAssetWithAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 networkAccessAllowed:(BOOL)a3 resizeMode:(long long)a4 iCloudBlock:(id /* block */)a5 progressHandler:(id /* block */)a6 completion:(id /* block */)a7;
- (void).cxx_destruct;
- (id)init;

@end
