@class NSString;

@interface NewLifeThumbUpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long thumbupId;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) unsigned int identityFlag;

+ (void)initialize;

@end
