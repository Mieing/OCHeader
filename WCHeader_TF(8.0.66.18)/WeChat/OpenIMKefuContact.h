@class NSString, OpenIMKefuPersonalSetting, OpenIMContactCustomInfo;

@interface OpenIMKefuContact : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *kfUsername;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *bigHeadimg;
@property (retain, nonatomic) NSString *smallHeadimg;
@property (retain, nonatomic) NSString *nicknamePyinit;
@property (retain, nonatomic) NSString *nicknameQuanpin;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *descWordingId;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) OpenIMContactCustomInfo *customInfo;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) OpenIMKefuPersonalSetting *setting;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *exposedId;
@property (nonatomic) unsigned int kefuType;
@property (retain, nonatomic) NSString *kefuToolsInfo;
@property (nonatomic) unsigned int enterpriseAuthStatus;

+ (void)initialize;

@end
