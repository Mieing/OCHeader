@class NSString, CdnProgressInfo, CdnUploadTaskInfo;

@interface GroupNoticeUploadTask : NSObject

@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned char retryCount;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL isThumb;
@property (retain, nonatomic) CdnProgressInfo *progressInfo;
@property (retain, nonatomic) CdnUploadTaskInfo *resultInfo;
@property (copy, nonatomic) id /* block */ completeBlock;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
