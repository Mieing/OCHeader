@class NSString, NSData;

@interface DeepLinkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *apiName;
@property (nonatomic) unsigned int wxaScene;
@property (retain, nonatomic) NSData *reqData;
@property (retain, nonatomic) NSData *respData;
@property (retain, nonatomic) NSString *hostAppid;
@property (retain, nonatomic) NSString *wxaAppid;
@property (nonatomic) unsigned int useruin;
@property (nonatomic) unsigned int lifespan;
@property (retain, nonatomic) NSString *sdkVersion;

+ (void)initialize;

@end
