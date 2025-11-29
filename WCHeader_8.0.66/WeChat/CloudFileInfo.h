@class NSString;

@interface CloudFileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL isDir;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *fileHash;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long lastUpdateTime;
@property (retain, nonatomic) NSString *parentPath;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) NSString *fileName;

+ (void)initialize;

@end
