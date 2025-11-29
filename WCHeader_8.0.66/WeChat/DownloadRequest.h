@class NSString;

@interface DownloadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) unsigned long long rangeStart;
@property (nonatomic) unsigned long long rangeEnd;

+ (void)initialize;

@end
