@class NSString;

@interface GetWeappListByLocationResp_BusinessWeappInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *headimg;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *pageUrl;
@property (nonatomic) unsigned int version;

+ (void)initialize;

@end
