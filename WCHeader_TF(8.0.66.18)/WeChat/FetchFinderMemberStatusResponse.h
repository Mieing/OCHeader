@class BaseResponse;

@interface FetchFinderMemberStatusResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int membershipStatus;
@property (nonatomic) unsigned int visitorMemberStatus;
@property (nonatomic) unsigned long long validTime;
@property (nonatomic) unsigned long long leftDay;
@property (nonatomic) unsigned int subscriptionType;
@property (nonatomic) unsigned int isCancel;

+ (void)initialize;

@end
