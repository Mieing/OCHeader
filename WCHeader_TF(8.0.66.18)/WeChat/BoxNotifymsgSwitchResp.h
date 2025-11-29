@class AppmsgSwitchInfo, IamBizBaseResponse;

@interface BoxNotifymsgSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseResponse;
@property (retain, nonatomic) AppmsgSwitchInfo *appmsgInfo;
@property (nonatomic) unsigned int commentStatus;
@property (nonatomic) unsigned int likeStatus;

+ (void)initialize;

@end
