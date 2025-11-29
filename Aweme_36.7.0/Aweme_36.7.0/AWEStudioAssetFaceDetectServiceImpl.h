@class NSString;

@interface AWEStudioAssetFaceDetectServiceImpl : HTSService <AWEStudioAssetFaceDetectService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)detectFaceWithAssets:(id)a0 images:(id)a1 completion:(id /* block */)a2;

- (void)detectFaceWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)detectFaceWithImage:(id)a0 completion:(id /* block */)a1;

@end
