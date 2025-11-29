@class NSString;

@interface CdnFileStat : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *newmd5;
@property (nonatomic) unsigned int crc;
@property (nonatomic) unsigned long long encryptionSize;
@property (retain, nonatomic) NSString *fileid;

+ (void)initialize;

@end
