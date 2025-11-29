@class NSArray;

@interface AWEIMCustomGiphyPhotoDataSource : NSObject

@property (copy, nonatomic) NSArray *albumModels;

+ (void)asyncReadAlbumsWithType:(long long)a0 completion:(id /* block */)a1;
+ (id)mapToAlbumModels:(id)a0;

- (void)p_appendWithAlbumModels:(id)a0 completion:(id /* block */)a1;
- (id)allPhotosAlbumModel;
- (void)asyncLoadOtherAlbumsWithCompletion:(id /* block */)a0;
- (void)clearAlbumModels;
- (void).cxx_destruct;
- (id)init;

@end
