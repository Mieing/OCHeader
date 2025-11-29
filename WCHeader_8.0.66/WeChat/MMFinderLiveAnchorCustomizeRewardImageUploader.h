@interface MMFinderLiveAnchorCustomizeRewardImageUploader : NSObject

+ (void)startUploadCustomImage:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
+ (void)compressAndCacheImage:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
+ (void)uploadImageWithUploadImageFilePath:(id)a0 filePinningToken:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;

@end
