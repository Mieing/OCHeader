@class NSString;

@interface LZDownloadTaskItem : NSObject

@property (retain, nonatomic) NSString *savePath;
@property (readonly, nonatomic) long long seqNo;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } downloadRange;
@property (nonatomic) long long fileSize;

- (id)init;
- (void).cxx_destruct;

@end
