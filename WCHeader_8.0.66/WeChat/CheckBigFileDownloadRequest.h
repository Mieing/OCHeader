@class BaseRequest, NSString;

@interface CheckBigFileDownloadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileMd5;
@property (nonatomic) unsigned int fileType;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSString *fileName;

+ (void)initialize;

@end
