@class NSString;

@interface StatusFeedMediaLocalFileGenPathResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *localPath;
@property (nonatomic) BOOL isFileExist;
@property (retain, nonatomic) NSString *fileCacheKey;

+ (void)initialize;

@end
