@class FinderContactExtInfo, FinderNicknameVerifyInfo, FinderContact, BaseResponse;

@interface FinderCreateUserResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (retain, nonatomic) FinderContactExtInfo *extInfo;

+ (void)initialize;

@end
