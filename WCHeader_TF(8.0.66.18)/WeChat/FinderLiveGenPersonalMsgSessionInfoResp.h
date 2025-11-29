@class NSString, FinderLivePersonalMsgSessionInfo, BaseResponse;

@interface FinderLiveGenPersonalMsgSessionInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLivePersonalMsgSessionInfo *sessionInfo;
@property (nonatomic) BOOL enableCreateSession;
@property (retain, nonatomic) NSString *rejectMsg;
@property (retain, nonatomic) NSString *selfUsername;
@property (retain, nonatomic) NSString *selfEncryptedUsername;

+ (void)initialize;

@end
