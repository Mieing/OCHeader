@class BaseResponse;

@interface FinderLiveSyncNotifySeiInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int nextRegularReqDelayTimeS;

+ (void)initialize;

@end
