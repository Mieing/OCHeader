@class NSDate, PHContentEditingOutput, CLLocation;

@interface TMAlbumServiceWithCertImpl : NSObject

@property (nonatomic) struct TMAlbumServiceStruct { NSDate *creationDate; CLLocation *location; BOOL favorite; BOOL hidden; PHContentEditingOutput *contentEditingOutput; } requestContext;

- (void)tm_saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)tm_saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)tm_saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)tm_saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 error:(id *)a3;
- (void)tm_saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 error:(id *)a3;
- (void)tm_saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 error:(id *)a3;
- (void)tm_saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)tm_saveImageWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)tm_saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)new_tm_saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)tm_saveExtensionImageWithImageData:(id)a0 withPrivacyCert:(id)a1 error:(id *)a2;
- (void)tm_saveExtensionImageWithImageData:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveExtensionImageWithImageData:(id)a0 withPrivacyCert:(id)a1 toAlbum:(id)a2 completionHandler:(id /* block */)a3;
- (void)setContextToRequest:(id)a0;
- (void).cxx_destruct;

@end
