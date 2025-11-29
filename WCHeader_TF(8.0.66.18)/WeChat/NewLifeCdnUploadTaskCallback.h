@class NSString;

@interface NewLifeCdnUploadTaskCallback : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) unsigned int callbackType;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long total;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *thumbUrl;

+ (void)initialize;

@end
