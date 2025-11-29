@interface WCFinderUploadCoverHelper : NSObject

+ (BOOL)uploadImage:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
+ (BOOL)uploadImageData:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
+ (BOOL)uploadImage:(id)a0 imageData:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
+ (id)appendBGColor:(id)a0 colorString:(id)a1;
+ (id)saveToPath:(id)a0;

@end
