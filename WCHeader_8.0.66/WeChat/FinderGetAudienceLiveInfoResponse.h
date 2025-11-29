@class FinderAudienceLiveInfo, BaseResponse;

@interface FinderGetAudienceLiveInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderAudienceLiveInfo *audienceLiveInfo;

+ (void)initialize;

@end
