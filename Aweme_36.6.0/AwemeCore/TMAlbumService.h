@class TMAlbumServiceImpl;

@interface TMAlbumService : NSObject

@property (retain, nonatomic) TMAlbumServiceImpl *impl;

- (void)saveImageWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveVideoWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)setRequestProperty:(id)a0 location:(id)a1 favorire:(BOOL)a2 hidden:(BOOL)a3 contentEditingOutput:(id)a4;
- (void)saveImageWithImage:(id)a0 error:(id *)a1;
- (void)saveImageWithFileURL:(id)a0 error:(id *)a1;
- (void)saveVideoWithFileURL:(id)a0 error:(id *)a1;
- (void)saveImageWithImage:(id)a0 toAlbum:(id)a1 error:(id *)a2;
- (void)saveImageWithFileURL:(id)a0 toAlbum:(id)a1 error:(id *)a2;
- (void)saveVideoWithFileURL:(id)a0 toAlbum:(id)a1 error:(id *)a2;
- (void)saveImageWithImage:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveImageWithFileURL:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveVideoWithFileURL:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveExtensionImageWithImageData:(id)a0 error:(id *)a1;
- (void)saveExtensionImageWithImageData:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveExtensionImageWithImageData:(id)a0 toAlbum:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
