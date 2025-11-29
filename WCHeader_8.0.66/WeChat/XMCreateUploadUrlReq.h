@class NSString;

@interface XMCreateUploadUrlReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *sha;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

@end
