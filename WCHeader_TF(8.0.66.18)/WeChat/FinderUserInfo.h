@class NSString, FinderAuthInfo;

@interface FinderUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int authIconType;
@property (retain, nonatomic) NSString *authProfession;
@property (retain, nonatomic) FinderAuthInfo *authInfo;

+ (void)initialize;

@end
