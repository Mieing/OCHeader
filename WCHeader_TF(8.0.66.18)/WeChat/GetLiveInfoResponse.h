@class LiveInfo, BaseResponse;

@interface GetLiveInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LiveInfo *liveInfo;

+ (void)initialize;

@end
