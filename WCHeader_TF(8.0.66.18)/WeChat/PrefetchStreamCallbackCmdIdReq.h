@class NSString, NewLifeStreamResponse, NewLifePostJumpFlowParams, NSMutableArray, NewLifeLocalTabTipsInfo;

@interface PrefetchStreamCallbackCmdIdReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NewLifeLocalTabTipsInfo *localTabTipsInfo;
@property (retain, nonatomic) NewLifeStreamResponse *response;
@property (retain, nonatomic) NSString *searchPassInfo;
@property (retain, nonatomic) NSMutableArray *notificationBubbleShowInfo;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned int enterTabIndex;
@property (nonatomic) BOOL jumpDetailFirst;
@property (retain, nonatomic) NewLifePostJumpFlowParams *postJumpParams;

+ (void)initialize;

@end
