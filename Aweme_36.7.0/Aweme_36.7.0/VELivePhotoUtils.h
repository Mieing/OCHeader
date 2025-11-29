@interface VELivePhotoUtils : NSObject

+ (BOOL)saveVideoAndPicAsLivePhoto:(id)a0 coverImagePath:(id)a1 outDir:(id)a2 completion:(id /* block */)a3;
+ (BOOL)saveVideoAndPicAsLivePhoto:(id)a0 coverImagePath:(id)a1 position:(float)a2 outDir:(id)a3 completion:(id /* block */)a4;
+ (BOOL)saveVideoAndPicAsLivePhoto:(id)a0 coverImagePath:(id)a1 completion:(id /* block */)a2;
+ (BOOL)saveVideoAndPicAsLivePhoto:(id)a0 coverImagePath:(id)a1 position:(float)a2 completion:(id /* block */)a3;
+ (BOOL)saveVideoAndPicAsLivePhotoWithUserMetadata:(id)a0 coverImagePath:(id)a1 position:(float)a2 metadata:(id)a3 completion:(id /* block */)a4;
+ (BOOL)saveVideoAndPicAsLivePhotoWithUserMetadata2:(id)a0 coverImage:(id)a1 position:(float)a2 metadata:(id)a3 completion:(id /* block */)a4;

@end
