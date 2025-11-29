@class NSMutableDictionary, NSMutableArray, VideoItem;

@interface GetPlayDetailResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int taskType;
@property (retain, nonatomic) NSMutableArray *playTimelineArray;
@property (readonly, nonatomic) unsigned long long playTimelineArray_Count;
@property (retain, nonatomic) VideoItem *videoItem;
@property (nonatomic) BOOL hasVideoItem;
@property (nonatomic) long long avatarUid;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
