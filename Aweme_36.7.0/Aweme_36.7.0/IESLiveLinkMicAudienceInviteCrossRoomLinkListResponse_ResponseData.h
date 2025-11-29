@class GPBInt64ObjectDictionary;

@interface IESLiveLinkMicAudienceInviteCrossRoomLinkListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *roomLists;
@property (readonly, nonatomic) unsigned long long roomLists_Count;
@property (nonatomic) int realInviteType;

+ (id)descriptor;

@end
