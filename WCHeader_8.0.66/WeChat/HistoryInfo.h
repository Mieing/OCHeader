@class NSString;

@interface HistoryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileMd5;
@property (nonatomic) unsigned int fileLength;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSString *newFormatFileid;
@property (retain, nonatomic) NSString *newFormatAeskey;
@property (retain, nonatomic) NSString *newFormatMd5;
@property (nonatomic) unsigned int newFormatFileLength;
@property (nonatomic) unsigned int newFormatMsgCount;

+ (void)initialize;

@end
