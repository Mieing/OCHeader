@class NSDate, PHContentEditingOutput, CLLocation;

@interface TMAlbumServiceImpl : NSObject

@property (nonatomic) struct TMAlbumServiceStruct { NSDate *creationDate; CLLocation *location; BOOL favorite; BOOL hidden; PHContentEditingOutput *contentEditingOutput; } requestContext;

- (void)setContextToRequest:(id)a0;
- (void)tm_saveImageWithImage:(id)a0 error:(id *)a1;
- (void)tm_saveImageWithFileURL:(id)a0 error:(id *)a1;
- (void)tm_saveVideoWithFileURL:(id)a0 error:(id *)a1;
- (void)tm_saveImageWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)tm_saveImageWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)tm_saveVideoWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)tm_saveImageWithImage:(id)a0 toAlbum:(id)a1 error:(id *)a2;
- (void)tm_saveImageWithFileURL:(id)a0 toAlbum:(id)a1 error:(id *)a2;
- (void)tm_saveVideoWithFileURL:(id)a0 toAlbum:(id)a1 error:(id *)a2;
- (void)tm_saveImageWithImage:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveImageWithFileURL:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveVideoWithFileURL:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void)tm_saveExtensionImageWithImageData:(id)a0 error:(id *)a1;
- (void)tm_saveExtensionImageWithImageData:(id)a0 completionHandler:(id /* block */)a1;
- (void)tm_saveExtensionImageWithImageData:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
