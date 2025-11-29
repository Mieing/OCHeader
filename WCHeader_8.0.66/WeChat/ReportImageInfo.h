@class NSString;

@interface ReportImageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *originFileId;
@property (retain, nonatomic) NSString *originAesKey;
@property (retain, nonatomic) NSString *originMd5;

+ (void)initialize;

@end
