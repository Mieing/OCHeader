@class NSString, BaseResponse;

@interface FinderLiveRespondGameInvitationResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *invitationId;

+ (void)initialize;

@end
