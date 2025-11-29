@class BaseRequest, NSString;

@interface CheckMd5Request : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *newmd5;
@property (nonatomic) unsigned int crc32;

+ (void)initialize;

@end
