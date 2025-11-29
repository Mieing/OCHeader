@class BaseRequest, BlackListInfo;

@interface SetBlackListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BlackListInfo *blackListInfo;
@property (nonatomic) BOOL associateWxgameAccount;

+ (void)initialize;

@end
