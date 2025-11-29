@class NSString, FinderAuthInfo;

@interface FinderUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int authIconType;
@property (retain, nonatomic) NSString *authProfession;
@property (retain, nonatomic) FinderAuthInfo *authInfo;

+ (void)initialize;

- (void)setAuthInfo:(id)a0;
- (id)authInfo;
- (void)setAuthProfession:(id)a0;
- (id)authProfession;
- (void)setAuthIconType:(unsigned int)a0;
- (unsigned int)authIconType;
- (void)setCoverImgUrl:(id)a0;
- (id)coverImgUrl;

@end
