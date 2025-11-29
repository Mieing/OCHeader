@class NSString, NSData;

@interface WxaResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) float scoreTfIdf;
@property (nonatomic) float scoreQuailty;
@property (nonatomic) unsigned int dau;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *extraJson;
@property (retain, nonatomic) NSData *debugBuf;

+ (void)initialize;

@end
