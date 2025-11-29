@class NSString;

@interface UserAttr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *headimgurl;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int headType;
@property (nonatomic) unsigned int identityType;
@property (retain, nonatomic) NSString *identityName;

+ (void)initialize;

@end
