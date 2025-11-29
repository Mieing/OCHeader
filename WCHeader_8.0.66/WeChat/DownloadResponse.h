@class NSString;

@interface DownloadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) unsigned long long rangeStart;
@property (nonatomic) unsigned long long rangeEnd;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *rawfilemd5;

+ (void)initialize;

@end
