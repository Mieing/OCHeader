@class NSString;

@interface BatchCheckMd5Element : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *newmd5;
@property (nonatomic) unsigned int crc32;

+ (void)initialize;

@end
