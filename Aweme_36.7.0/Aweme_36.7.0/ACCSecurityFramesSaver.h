@interface ACCSecurityFramesSaver : NSObject

+ (void)saveImages:(id)a0 scene:(id)a1 type:(unsigned long long)a2 taskId:(id)a3 compressed:(BOOL)a4 completion:(id /* block */)a5;
+ (void)saveImage:(id)a0 scene:(id)a1 type:(unsigned long long)a2 taskId:(id)a3 completion:(id /* block */)a4;
+ (void)compressImages:(id)a0 scene:(id)a1 type:(unsigned long long)a2 taskId:(id)a3 completion:(id /* block */)a4;
+ (void)saveImage:(id)a0 scene:(id)a1 type:(unsigned long long)a2 taskId:(id)a3 compressed:(BOOL)a4 completion:(id /* block */)a5;
+ (id)securitySaveQueue;
+ (id)p_framePathWithTaskId:(id)a0 scene:(id)a1 compressed:(BOOL)a2 type:(unsigned long long)a3;
+ (id)tryCompressImage:(id)a0 ifImageSizeLargeTargetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)p_framePathWithTaskId:(id)a0 scene:(id)a1 type:(unsigned long long)a2;
+ (id)p_folderNameWithType:(unsigned long long)a0;
+ (unsigned long long)p_filesCountInFolder:(id)a0;
+ (void)saveImages:(id)a0 scene:(id)a1 type:(unsigned long long)a2 taskId:(id)a3 completion:(id /* block */)a4;
+ (void)moveImageAtPaths:(id)a0 scene:(id)a1 type:(unsigned long long)a2 fromTaskId:(id)a3 toTaskId:(id)a4 completion:(id /* block */)a5;
+ (id)standardCompressImage:(id)a0;

@end
