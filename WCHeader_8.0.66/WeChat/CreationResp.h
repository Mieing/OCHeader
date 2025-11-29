@class CreationInfo, IamBizBaseResponse;

@interface CreationResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseResponse;
@property (retain, nonatomic) CreationInfo *info;

+ (void)initialize;

@end
