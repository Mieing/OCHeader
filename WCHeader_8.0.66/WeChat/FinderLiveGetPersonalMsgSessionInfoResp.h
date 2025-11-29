@class NSString, FinderLivePersonalMsgSessionInfo, BaseResponse;

@interface FinderLiveGetPersonalMsgSessionInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLivePersonalMsgSessionInfo *sessionInfo;
@property (retain, nonatomic) NSString *selfEncryptedUsername;

+ (void)initialize;

@end
