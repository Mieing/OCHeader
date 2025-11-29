@class GPBInt64Array, NSMutableArray;

@interface IESLiveLinkMicAudienceInviteFriendResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *invitedUserIdListArray;
@property (readonly, nonatomic) unsigned long long invitedUserIdListArray_Count;
@property (retain, nonatomic) NSMutableArray *invitedOpenIdListArray;
@property (readonly, nonatomic) unsigned long long invitedOpenIdListArray_Count;

+ (id)descriptor;

@end
