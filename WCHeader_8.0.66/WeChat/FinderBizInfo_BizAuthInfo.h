@class NSString;

@interface FinderBizInfo_BizAuthInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int authIconType;
@property (retain, nonatomic) NSString *authIconUrl;
@property (retain, nonatomic) NSString *verifyInfo;

+ (void)initialize;

- (void)setVerifyInfo:(id)a0;
- (id)verifyInfo;
- (void)setAuthIconUrl:(id)a0;
- (id)authIconUrl;
- (void)setAuthIconType:(unsigned int)a0;
- (unsigned int)authIconType;

@end
