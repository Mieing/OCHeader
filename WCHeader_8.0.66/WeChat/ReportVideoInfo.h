@class NSString;

@interface ReportVideoInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *newMd5;
@property (nonatomic) float duration;
@property (retain, nonatomic) NSString *thumbFileId;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (retain, nonatomic) NSString *thumbMd5;
@property (retain, nonatomic) NSString *originMd5;
@property (retain, nonatomic) NSString *originNewMd5;
@property (retain, nonatomic) NSString *originThumbFileId;
@property (retain, nonatomic) NSString *originThumbAesKey;
@property (retain, nonatomic) NSString *originThumbMd5;
@property (nonatomic) float originDuration;

+ (void)initialize;

@end
