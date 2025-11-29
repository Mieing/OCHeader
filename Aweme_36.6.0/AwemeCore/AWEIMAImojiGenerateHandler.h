@interface AWEIMAImojiGenerateHandler : NSObject

+ (id)contextWithImage:(id)a0 artStyle:(id)a1 updateClosure:(id /* block */)a2;
+ (id)uploadImageNode;
+ (id)rootDirectoryWithUid:(id)a0 autoCreated:(BOOL)a1;
+ (id)imageProcessNode;
+ (id)uploadFaceNode;
+ (id)pollGenerateNode;
+ (void)preloadImageWithRawData:(id)a0 taskID:(id)a1 context:(id)a2;
+ (void)renderingData:(id)a0 rawDic:(id)a1 taskID:(id)a2 context:(id)a3 sampleRate:(double)a4;
+ (id)p_pathWithSubPath:(id)a0 autoCreated:(BOOL)a1;
+ (void)cleanupDiskCache;
+ (id)pipeline;
+ (id)endNode;

@end
