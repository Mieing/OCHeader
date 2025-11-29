@class CdnUploadTaskInfo, NSMutableArray;

@interface MJShootCDNUploadProcessor : NSObject

@property (retain, nonatomic) CdnUploadTaskInfo *resultFileUploadedTaskInfo;
@property (retain, nonatomic) NSMutableArray *auditFileUploadedTaskInfos;

- (void)uploadWithResultFilePath:(id)a0 mediaType:(long long)a1 cdnAppType:(int)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
