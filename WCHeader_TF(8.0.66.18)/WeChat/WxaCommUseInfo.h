@class NSString;

@interface WxaCommUseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int referId;
@property (nonatomic) unsigned int recallQueueType;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appNickName;
@property (retain, nonatomic) NSString *appIconUrl;

+ (void)initialize;

@end
