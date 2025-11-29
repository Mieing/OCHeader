@class NSString, CdnDownloadTaskInfo;

@interface MJCdnDownloadResult : NSObject

@property (readonly, nonatomic) CdnDownloadTaskInfo *taskInfo;
@property (readonly, copy, nonatomic) NSString *filePath;

- (id)initWithTaskInfo:(id)a0;
- (void).cxx_destruct;

@end
