@class NSString;

@interface AWEIMMessageAttachmentDownloadContext : NSObject

@property (nonatomic) int fileType;
@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) BOOL needFetchUrl;
@property (copy, nonatomic) NSString *urlPath;
@property (copy, nonatomic) NSString *tosKey;

- (void).cxx_destruct;

@end
