@class NSMutableArray;

@interface IESLiveLinkMicProfitGetAudioAvatarListResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long enableAvatarId;
@property (retain, nonatomic) NSMutableArray *avatarListArray;
@property (readonly, nonatomic) unsigned long long avatarListArray_Count;
@property (nonatomic) BOOL enableAudioAvatar;

+ (id)descriptor;

@end
