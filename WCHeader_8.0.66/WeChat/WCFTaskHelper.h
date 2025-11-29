@interface WCFTaskHelper : NSObject

+ (id)hashKeyForURL:(id)a0;
+ (id)keyForURL:(id)a0;
+ (id)keyForURL:(id)a0 imageIdentifier:(id)a1;
+ (id)keyForMedia:(id)a0 type:(long long)a1;
+ (id)taskInfoWithMedia:(id)a0 type:(long long)a1 key:(id)a2;
+ (id)generateDownloadHeadImageTaskInfo:(id)a0 key:(id)a1;
+ (id)genDownloadTaskInfos:(id)a0 isThumb:(BOOL)a1;
+ (void)setupMediaTask:(id)a0;
+ (void)setupURLTask:(id)a0;

@end
