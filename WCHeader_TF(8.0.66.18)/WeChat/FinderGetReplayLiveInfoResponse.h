@class FinderLiveReplayMicInfo, FinderLiveInfo, BaseResponse;

@interface FinderGetReplayLiveInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (retain, nonatomic) FinderLiveReplayMicInfo *replayMicInfo;

+ (void)initialize;

@end
