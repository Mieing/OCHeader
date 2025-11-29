@class JumpInfo, AccountInfo, BaseResponse;

@interface GetUserGameCenterAccountInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AccountInfo *accountInfo;
@property (retain, nonatomic) JumpInfo *jumpInfo;

+ (void)initialize;

@end
