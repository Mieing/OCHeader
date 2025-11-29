@class IESLiveLinkMicAudienceGetHamletAvatarListResponse_Post, NSMutableArray;

@interface IESLiveLinkMicAudienceGetHamletAvatarListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *listArray;
@property (readonly, nonatomic) unsigned long long listArray_Count;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetHamletAvatarListResponse_Post *noAvatarPost;
@property (nonatomic) BOOL hasNoAvatarPost;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetHamletAvatarListResponse_Post *noPermissionPost;
@property (nonatomic) BOOL hasNoPermissionPost;

+ (id)descriptor;

@end
