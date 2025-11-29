@class NSString;

@interface IESGCPPrivacyApiService_Douyin : NSObject <IESGCPPrivacyApiService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 withCert:(id)a1 error:(id *)a2;
- (void)requestAccessMicrophoneWithPrivacyCert:(id)a0 completionHandler:(id /* block */)a1;
- (id)createSKStoreWithCert:(id)a0 error:(id *)a1;
- (void)openURL:(id)a0 withCert:(id)a1 error:(id *)a2 context:(id)a3;
- (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 context:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestPhotoAlbumAuthorizationWithCert:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveVideoWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageToAlbum:(id)a0 completionHandler:(id /* block */)a1;
- (id)createCertWithCert:(id)a0;
- (id)createCertWithCert:(id)a0 jsbContext:(id)a1;

@end
