@class NSString, FinderJumpInfo, BaseResponse;

@interface FinderLiveCloseMicWithAudienceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned long long serverMsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) FinderJumpInfo *purchaseMicEvaluateEntrance;

+ (void)initialize;

@end
