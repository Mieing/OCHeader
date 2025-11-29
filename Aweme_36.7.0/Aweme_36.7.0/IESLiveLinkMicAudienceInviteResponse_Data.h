@class NSString, NSMutableArray;

@interface IESLiveLinkMicAudienceInviteResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *invitedUserIdListArray;
@property (readonly, nonatomic) unsigned long long invitedUserIdListArray_Count;
@property (retain, nonatomic) NSMutableArray *noticeInfosArray;
@property (readonly, nonatomic) unsigned long long noticeInfosArray_Count;
@property (copy, nonatomic) NSString *remoteLinkerSessionId;

+ (id)descriptor;

@end
