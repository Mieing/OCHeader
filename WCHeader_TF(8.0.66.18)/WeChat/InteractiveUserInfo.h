@class NSString;

@interface InteractiveUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *headimgurl;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int headType;
@property (nonatomic) unsigned int identityType;
@property (retain, nonatomic) NSString *identityName;
@property (nonatomic) BOOL isFans;
@property (nonatomic) unsigned long long identityId;

+ (void)initialize;

@end
