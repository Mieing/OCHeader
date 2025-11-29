@class NSString, EnterLiveResponse_AvatarInfo, NSMutableDictionary, NSMutableArray;

@interface EnterLiveResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) EnterLiveResponse_AvatarInfo *avatarInfo;
@property (nonatomic) BOOL hasAvatarInfo;
@property (retain, nonatomic) NSMutableArray *playTimelineArray;
@property (readonly, nonatomic) unsigned long long playTimelineArray_Count;
@property (copy, nonatomic) NSString *enterTip;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
