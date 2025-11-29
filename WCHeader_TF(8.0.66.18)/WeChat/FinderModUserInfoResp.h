@class FinderNicknameVerifyInfo, FinderUserProtectionInfo;

@interface FinderModUserInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (retain, nonatomic) FinderUserProtectionInfo *userProtectionInfo;

+ (void)initialize;

@end
