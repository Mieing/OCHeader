@class NSString, BaseResponse;

@interface FinderLiveApplyBattleResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned long long serverMsgId;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
