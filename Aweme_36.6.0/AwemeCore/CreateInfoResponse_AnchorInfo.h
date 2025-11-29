@class NSString, HTSLiveImage, NSMutableArray, GPBInt64ObjectDictionary;

@interface CreateInfoResponse_AnchorInfo : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *covers;
@property (readonly, nonatomic) unsigned long long covers_Count;
@property (copy, nonatomic) NSString *lastResolutionKey;
@property (nonatomic) long long hasGroupLivePermission;
@property (nonatomic) BOOL lastTitleIsAi;
@property (retain, nonatomic) NSMutableArray *recommendAiCoversArray;
@property (readonly, nonatomic) unsigned long long recommendAiCoversArray_Count;
@property (retain, nonatomic) HTSLiveImage *avatarWithBackground;
@property (nonatomic) BOOL hasAvatarWithBackground;
@property (nonatomic) BOOL lastCoverIsAi;

+ (id)descriptor;

@end
