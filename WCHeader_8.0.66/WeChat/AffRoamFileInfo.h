@class NSString;

@interface AffRoamFileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL isDir;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long lastUpdateTime;

+ (void)initialize;

@end
