@class NSString;

@interface AWEACCGrootStickerNetServiceImpl : NSObject <ACCGrootStickerNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCheckGrootRecognitionWith:(id)a0 creationId:(id)a1 cameraDirection:(id)a2 completion:(id /* block */)a3;
- (void)requestFetchGrootRecognitionListWith:(id)a0 creationId:(id)a1 cameraDirection:(id)a2 completion:(id /* block */)a3;

@end
