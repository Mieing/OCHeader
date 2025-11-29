@class BlackListInfo, BaseResponse;

@interface GetBlackListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BlackListInfo *blackListInfo;
@property (nonatomic) BOOL canAssociateWxgameAccount;

+ (void)initialize;

@end
