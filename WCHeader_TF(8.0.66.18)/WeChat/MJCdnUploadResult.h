@class CdnUploadTaskInfo, NSString;

@interface MJCdnUploadResult : NSObject

@property (readonly, nonatomic) CdnUploadTaskInfo *taskInfo;
@property (readonly, copy, nonatomic) NSString *taskKey;
@property (readonly, copy, nonatomic) NSString *fileCdnURL;

- (id)initWithTaskInfo:(id)a0;
- (void).cxx_destruct;

@end
