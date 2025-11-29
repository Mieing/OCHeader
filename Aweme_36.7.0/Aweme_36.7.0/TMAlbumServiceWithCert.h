@class TMAlbumServiceWithCertImpl;

@interface TMAlbumServiceWithCert : NSObject

@property (retain, nonatomic) TMAlbumServiceWithCertImpl *impl;

- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveExtensionImageWithImageData:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)setRequestProperty:(id)a0 location:(id)a1 favorire:(BOOL)a2 hidden:(BOOL)a3 contentEditingOutput:(id)a4;
- (void)new_saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 error:(id *)a3;
- (void)saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 error:(id *)a3;
- (void)saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 error:(id *)a3;
- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveExtensionImageWithImageData:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)saveExtensionImageWithImageData:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
