@class NSString;

@interface PackThumbExt : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *previewUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *cdnurl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *externUrl;
@property (retain, nonatomic) NSString *externMd5;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
